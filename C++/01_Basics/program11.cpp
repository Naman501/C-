#include<iostream>
using namespace std;

int main(){

    int my_nums[]={2,3,4,5,6,9};

    int count=5;
    for (int i = 0; i <= count; i++)
    {
        cout<<my_nums[i]<<endl;
        cout<<i*i<<endl;
    }
    
    cout<<"BREAK!"<<endl;;

    for(int i:my_nums)
    {
        cout<< i <<endl;
    }

    return 0;
}