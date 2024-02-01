#include<iostream>
using namespace std;

class King{
public:
void call();
void Text(){
        cout<<"HELLO"<<endl;
        this->call();
}

};

void King:: call(){
    cout<<"A is Nigga"<<endl;
    cout<<"B is Nigga"<<endl;
    cout<<"C is Nigga"<<endl;

};

int main(){


King obj;
obj.Text();

    return 0;
}