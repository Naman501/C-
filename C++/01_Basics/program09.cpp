#include<iostream>
using namespace std;

int main(){

    int rating =33;

    switch (rating)
    {
    case 1:
            puts("Rated as 1-star.");
        break;
    case 2:
            puts("Rated as 2-star.");
        break;
        
    case 3:
            puts("Rated as 3-star.");
        break;


    default:
            puts("Not Rated.");
        break;
    }

    return 0;
}