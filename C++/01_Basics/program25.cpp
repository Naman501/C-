#include<iostream>
using namespace std;

int getTwo(){
    return 2;
}

void interesting(){
    puts("I am Interesting.");
}

int main(){


int whatIGot=getTwo();

void (*pointsToInteresting)()= interesting;

cout<<whatIGot<<endl;
pointsToInteresting();
(*pointsToInteresting)();


    return 0;
}