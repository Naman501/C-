#include<iostream>
#include<string>
using namespace std;

string api_call(){
    return "Got Some Data From Web \n";
}

int anotherAPIcall(){
    return 69;
}


int main(){

auto response = api_call();  // auto is used when we dont know what datatype is used
                            // delaring data types(int,float,char) in advance makes a C++ a Strongly Types Language.
auto rep = anotherAPIcall();

cout<<"API call value:"<< response;
cout<<"Another API call value:"<< rep<<endl;


if (typeid(response)==typeid(string))
{
    puts("Type Of both ID matches. \n");
}

if (typeid(rep)==typeid(int))
{
    puts("Type Of both ID is INT. \n");
}

    return 0;
}