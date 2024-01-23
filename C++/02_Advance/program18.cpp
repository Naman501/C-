#include<iostream>
#include<string>
using namespace std;

template <typename T>
T getBigger(T a,T b){
return (a>b) ? a : b;
}

int main(){


cout<<getBigger(6,9)<<endl;
cout<<getBigger('t','n')<<endl;



    return 0;
}

//STL
//It Takes Generic Programming To Next Level
//Provides In-Built Data Structures And Algorithms

//Generic Programming => Data Types Are Not Specefied At The Time Of Implementation OF Code Logic

//Run-TIme Polymorphism

