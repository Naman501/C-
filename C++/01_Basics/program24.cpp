//   What_I_Will_Give_Back function_name(What_You_Have_To_Give_Me){

//     What I Will Do;

//     return 0;
//     nothing executes after return

// }

// Call BY Value

#include<iostream>
// #include "adder.h"

using namespace std;

// void lifeUp(int *score){
//     ++(*score);
// }

void lifeUp(int &score){
    ++(score);
}

template<typename T>
int addme(T a , T b){
    return a+b;
}


int main(){

int life=3;
lifeUp(life);
cout<<life<<endl;

int v1=4;
int v2=6;
float v3 = 4.6;
float v4=5.4;

cout<<addme(v1,v2)<<endl;
cout<<addme(v3,v4)<<endl;

    return 0;
}

// Call by Refernce