#include<iostream>
#include<string>
#include<memory>//smart pointer
using namespace std;


class User{
public:
    User(){
        cout<<"User Created."<<endl;
    }
      ~User(){
        cout<<"User Destroyed."<<endl;
    }

    void testFunc(){
        cout<<"I Am A Test Function."<<endl;
    }
};

int main(){

{
    // unique_ptr<User> Naman (new User());// non_favourite way of developers

        unique_ptr<User> Naman=make_unique<User>();
        Naman->testFunc();

        // unique_ptr<User> Naman=Nmn; NOT ALLPWED

}

{
    // shared_ptr<User>NMN(new User());// wasting memory but allowed
        shared_ptr<User> NMN = make_shared<User>();
        weak_ptr<User> wNMN= NMN;// not being counted......stranded alone.
        shared_ptr<User>NNMMNN=NMN;
        
}

//'new' keyword uses Heap memory.

cout<<"OUTSIDE CODE!"<<endl;



    return 0;
}