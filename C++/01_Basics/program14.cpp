#include<iostream>
using namespace std;

int main(){

    // float call_api = 3.00;
    char call_api = 'n';

    try{
        cout<<"Trying to use API value \n";
        cout<<"Did Some Testing With API value. \n";
        throw call_api;
        cout<<"No Code Executes after Return AND Throw\n";   //REMEMBER
    } catch(int x){
            cout<<"Integer Exception Handled.\n";
    } catch(float f){
        cout<<"Float exception Handled.\n";
    } catch(...){
       cout<<"Something went wrong.\n";
    }

    cout<<"Keep on Moving With rest of code. \n";

    return 0;
}