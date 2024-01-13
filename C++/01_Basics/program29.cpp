#include<iostream>
#include <string>
using namespace std;

template <typename T>
void func(T t){
    cout << "One Func " << t << endl;
}

template<typename T, typename... Args>
    void func(T t,Args... args){
        cout <<"Two Func " << t << endl;
        func(args...);
    }


int main(){

        string myName ="Naman";

        func(myName);
        func(1,2,3,4.99,5,myName,9);  // the last one is used as an exit strategy.


    return 0;
}