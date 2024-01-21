//MOVE SEMANTICS

#include<iostream>
#include<string>
using namespace std;

void swap(int &a,int &b){
    int temp = move(a);
 a=move(b);
 b=move(temp);
// cout<<temp<<endl;
}

string printMe(){
    return "I Am Print";
}

int main(){

int a=9;
int b=6;



swap(a,b);


cout<<a<<endl;
cout<<b<<endl;

string s= printMe();//copies a refrence....doubly occupied memory....

string&& ss= printMe();//directly refrencing to printMe
    return 0;
}