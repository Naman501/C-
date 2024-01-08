#include<iostream>
// using namespace std;

struct User{
    const int id;
    int age;
User(): id(001) ,age(20){}

};




int main(){
using namespace std;

    //stack  => Has predefined Size.
    int score = 100;
    User mike;

    
    //heap   => predefined but can Grow

    int * heap_score = new int;
    * heap_score =200;

    User* nike =new User();


    delete heap_score;
    delete nike;
 
    return 0;
}