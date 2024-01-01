#include<iostream>
using namespace std;

int main(){

    // int my_numbs[] = {1,2,3,4};
    char my_string[]="Naman";
    char my_name[] ={'N','a','m','a','n',0}; //null-terminating character
    printf("My name is : %s! \n ",my_string);
    cout<<"Break"<<endl;
    printf("My name is : %s! \n ",my_name);

    for (int i = 0; my_name[i] !=0; i++)
    {
        cout<<"Character is: "<<my_name[i]<<endl;
    }

    cout<<"Break Pt.2"<<endl;
    
     for (char *cp=my_name; *cp!=0;cp++ )
    {
        cout<<"Character is: "<<*cp<<endl;
    }
    
    cout<<"Break Pt.3"<<endl;

    for (int i :my_name  )
    {
        cout<<"Char is: "<<i<<endl;
    }
    


    return 0;
}