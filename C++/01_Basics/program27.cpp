//Recursion is basically a function that calls itself but with an exit strategy.

#include<iostream>
using namespace std;

int factorial(int n);

int main(){

    //Factorial : 5*4*3*2*1
    //Factorial : 1*2*3*4*5
    int n;
   cout << "Enter The Number" << endl;
   cin >> n;

cout<<factorial(n)<<endl;
    return 0;
}

int factorial(int n){
if (n>1)
{
    return n  *  factorial(n-1);
} else {
    return 1;
}

}