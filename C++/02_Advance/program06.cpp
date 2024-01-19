#include<iostream>
#include<string>
using namespace std;


class Man{
    string _name;
    int _age;
    Man(){}
    protected:
    Man(const string & name, const int & age)
    : _name(name),_age(age){}
    void run(){puts("I can Run");}
    public:
    void sayname() const;
};

void Man::sayname() const {
    cout<<"My name is "<< _name << endl;
    cout<<"My age is "<<_age<<endl;
}


//superman

class superman : public Man{
    bool flight;
    public:
    superman(string name) :Man(name,25){}
    void run(){puts("I can run at Light Speed.");
    }
};
//spiderman

class spiderman : public Man{
    bool webbing;
    public:
    spiderman(string name) :Man(name,19){}
    void run(){puts("I can run at normal Speed.");}
    
};

int main()
{

superman clark("Kent");
 clark.sayname();
 clark.run();

spiderman peter("Parker");

peter.sayname();
peter.run();


    return 0;
}