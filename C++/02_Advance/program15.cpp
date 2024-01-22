#include<iostream>
#include<string>
using namespace std;

int main(){


[]{cout<<"Hello NAMAN \n";}();
// [](){return 100;};

auto sum=[](auto a,auto b){return a+b;};
cout<<"Sum Of 6 & 9 is :"<<sum(6,9)<<endl;
cout<<"Sum Of 3.5 & 1.5 is :"<<sum(3.5,1.5)<<endl;

string a="abc";
string b=" def";
cout<<sum(a,b)<<endl;


    return 0;
}