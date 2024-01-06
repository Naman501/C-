#include<iostream>
using namespace std;
// #define BOLD 4

enum MsOffice:uint8_t {
BOLD=60,
ITALICS=68,
UNDERLINE,
COSSED
};

int main(){

    int myAttributes = UNDERLINE;

    cout<<myAttributes<<endl;



    return 0;
}