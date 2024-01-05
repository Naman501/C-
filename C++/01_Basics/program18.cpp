#include<iostream>
using namespace std;

int main(){

    // bool isSignedIn = true;
   
    bool isAdmin = false;
     bool isGoogleUser = true;
     bool isFbUser=false;



    if ( (isGoogleUser || isFbUser) && isAdmin){
        puts("Welcome Admin!");
} else{
    puts("No Admin Access.");
}


if (isFbUser || isGoogleUser)
{
    puts("Welcome User.");
}    

    return 0;
}