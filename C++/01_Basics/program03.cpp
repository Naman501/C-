// #include<iostream>
// using namespace std;
// int main(){
//     int number=0;
//     cin >> number;
//     printf("Your ID is %d \n",number +3);
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string my_color;
//     cout<<"Enter your Favourite Color: \n";
//     getline(cin,my_color);
//     cout<<"Hey "<<my_color<<" Is My Favourite too"<<endl;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main(){
    string first_name,last_name;
    cout<<"Enter your First Name : \n";
    getline(cin,first_name);
    cout<<"Enter your Last Name : \n";
    getline(cin,last_name);

    cout<<"Welcome "<<first_name<<" " <<last_name<<"!"<<endl;
    return 0;
}

// IDENTIFIERS
//  _at start means private
// __means system keyword

