#include<iostream>
#include<string>
using namespace std;


class Rectangle{
    double _length;
    double _breadth;

    public:
    Rectangle(double l=2.0,double b=3.0){
        _length=l;
        _breadth=b;
    }
    double Area(){
        return _length*_breadth;
    }
    int compare(Rectangle rect){
        return this->Area()>rect.Area();
    }
    };


int main(){



Rectangle h1(3.0,6.0);
Rectangle h2(5.0,4.0);

if (h1.compare(h2))
{
    cout<<"H2 is smaller";
}else{
    cout<<"H2 is bigger";
}


    return 0;
}