#include<iostream>
using namespace std;

int main(){
    int score=200;
    int *myp=&score;
    printf("Value of Score is :%d \n",score);
    printf("Value of Pointer  is :%p \n",myp);

    int &another_score=score;
    another_score=800;

printf("Value of Score is :%d \n",score);
    printf("Value of Pointer  is :%p \n",myp);
    
    return 0;
}