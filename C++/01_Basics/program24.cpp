//   What_I_Will_Give_Back function_name(What_You_Have_To_Give_Me){

//     What I Will Do;

//     return 0;
//     nothing executes after return

// }

// Call BY Value

#include<iostream>
using namespace std;

// void lifeUp(int *score){
//     ++(*score);
// }

void lifeUp(int &score){
    ++(score);
}

int addme(int a, int b){
    return a+b;
}
int addme(float x, float y){
    return x+y;
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