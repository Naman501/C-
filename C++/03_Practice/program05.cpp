#include<iostream>
using namespace std;

class Test{
int num;
public:
Test & assign (int num){
    this->num=num+120;
    return *this;
}

void display(){
    cout<<"The value of num is: "<<num<<endl;
}
};

int main(){


        Test n1;
        n1.assign(100).display();//method chaining

    return 0;
}