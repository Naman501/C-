#include<iostream>
#include<string>
using namespace std;

class Phone{
    string _name= "";
    string _os= "";
    int _price = 0;
 
    public:
    Phone();   //default-constructor
    Phone(const string & name , const string & os , const int & price); //parameter-constructor
    Phone(const Phone &);  // copy-constructor
    string getName(){return _os;}
    ~Phone();// Destructor
};

 Phone::Phone(): _name(),_os("ios"),_price(){
    puts("Default Constructor");
}

Phone::Phone(const string & name , const string & os , const int & price): _name(name),_os(os),_price(price){
    puts("Parametrized-Constructor");
}

Phone::Phone(const Phone & values){
    puts("Over-write Copy-Constructor");
    _name=values._name;
    _os="Skinned "+values._os;
    _price=values._price;
}

Phone::~Phone(){
    puts("Destructor gets called");
}

int main(){


    Phone samsungA1;
    cout<<samsungA1.getName()<<endl;

    Phone OnePlus("Op13","Linux-Fedora",39999);
    cout<<OnePlus.getName()<<endl;

    Phone Micromax= OnePlus;

    cout<<Micromax.getName()<<endl;


    return 0;
}