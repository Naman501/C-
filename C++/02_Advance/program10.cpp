//New- Allocates a memory
//Delete-DeAllocates a memory

//Smart Pointers solves the issue of forgetting Delete
//Wrapper around real "raw" pointer
//Smart Pointer => created in Stack.

//Unique Pointers =>memory get free as scope ends
//They cannot be copied.


// {
            //empty scope
// }

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
cout<<"OUTSIDE CODE!"<<endl;



    return 0;
}