#include<iostream>
using namespace std;

//QUALIFIERS
//1.Modification Qualifiers
// const   valatile    mutable
//2.LIFE Duration Qualifiers
//static register extern  || 'auto'

int lifeUp(){
   static int life =3;
    // return life=life+1;
    // return life++;
    return ++life;
}
int main(){

    int life =3;
    cout<<"Your starting game life is "<<life<<endl;

    life=lifeUp();
    printf("Your updated game life is %d \n",life);

     life=lifeUp();
    printf("Your updated game life is %d \n",life);

    //  const int i =5;
    // i=7;



    return 0;
}