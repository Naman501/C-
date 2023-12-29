#include<iostream>
using namespace std;

int main(){
     int life;
        life = 4;

    int card;
    card=50;

    int my_card=60;

    int *myp;
    myp= &card;
     my_card = *myp;  // pointer de-refrenced

    printf("Value of Card is :%d \n",my_card);
    printf("Value of Card is :%p \n",myp);
    printf("Value of Card is :%d \n",&card);
    printf("Value of Card is :%d \n",&my_card);
    printf("Value of Card is :%d \n",card);





    return 0;
}