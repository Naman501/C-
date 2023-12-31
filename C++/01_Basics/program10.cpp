#include<iostream>
using namespace std;

int main(){

    int my_numbers[]={4 ,5 ,6 ,7 ,8 ,9 ,1 ,0 };

    int i=0;

    while(i < 8){
        if(i==3){
            cout<<"Special Thing!"<<endl;
            break;

        }

        cout<<"Current Number Is :"<<my_numbers[i] << endl;
        i++;
    }


    do
    {
        cout<<"current number is:"<< my_numbers<<endl;
        i++;
    } while (i <= 8);
    
    cout<<"Outside of Loop! \n";


    return 0;
}