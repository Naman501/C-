#include<iostream>
#include<string>
using namespace std;

class Money{
    public:
    void gotMoney(){
        puts("Got 5K USD in My Bank.");
    }
};

class Man{
    string _name;
    int _age=69;
    Man(){}

    friend class spiderman;

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
    // void run(){printf("I can run at normal Speed.\n",_age);
    void run(){puts("I can run at Light Speed.");

    }
};

//spiderman

class spiderman : public Man ,public Money{
    bool webbing;
    public:
    spiderman(string name) :Man(name,19){}
    void run(){printf("I can run at normal Speed.\n",_age);
        
    }
    
};

int main()
{

superman clark("Kent");
 clark.sayname();
 clark.run();

spiderman peter("Parker");

peter.sayname();
peter.run();
// peter._age;
peter.gotMoney();
    return 0;
}