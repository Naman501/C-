#include<iostream>
using namespace std;

class A{
private:
int x;
int y;
int z;
public:
void set(int x, int y,int z){
    // cout<<"BITCH"<<endl;
    this->x=x;// first x is the varible x declared in private & second x is the parameter x
    this->y=y;
    this-> z=z;
}
void print(){
    cout<<x<<endl<<y<<endl<<z<<endl;
}

};

int main(){


A obj;
obj.set(10,20,44);
obj.print();
    return 0;

}