#include<iostream>
using namespace std;

int main(){

    int *myp;

    // myp =new(nothrow) int [10000]; // nothrow will not show any exception =>no try...catch.............just CRASH!
    


                             //forcefully allocating memory => thus leading to memory leak and so whenever 
                            // using 'new' keyword 'delete' keyword is also to be used.
    
    try
    {
        myp =new(nothrow) int [10000];
cout<<"Memory space allocated! \n";
    }
    catch(...)
    {
        cout<<"Failed in Allocating Memory \n";
    }
    
        int x=5;
        x << 5;

    delete []myp;

    return 0;
}