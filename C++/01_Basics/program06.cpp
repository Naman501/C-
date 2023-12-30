#include<iostream>
using namespace std;

int main(){
    int integer_array[4]={1 ,2 ,3 ,4};
    cout << integer_array[2]<< endl;

    int another_array[4];
    another_array[0]=9;
    another_array[1]=19;


    cout << another_array[0] << endl;
    cout << another_array[3] << endl;

    *another_array=29;
    cout << another_array[0] << endl;  // as it  is a pointer ,it will point towards the first position of the given array.


    cout << another_array[1] << endl;
    int *ap  = another_array;
    ap = ap+1;
    *ap = 209;
    cout << another_array[1] << endl;


    return 0;
}