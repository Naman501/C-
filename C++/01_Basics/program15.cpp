#include<iostream>
using namespace std;


void sayHEllo(){
    puts("Hello there!");
}

int sayTwo(){
    // puts("2");
    return 2;
}

void sayThree(){
    puts("3");
}

int main(){

    sayHEllo();
    // sayTwo();
    printf("%d\n",sayTwo()+ 2); // here this is an integer.
    // printf("%s\n",sayThree());  //
    sayThree();  ///Here this is a string.


    return 0;
}
