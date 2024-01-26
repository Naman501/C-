#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int main(){

queue<int> myQ;

myQ.push(20);
myQ.push(30);
myQ.push(40);
myQ.push(50);


cout<<myQ.front()<<endl;
cout<<myQ.back()<<endl;

myQ.pop();
cout<<myQ.front()<<endl;
cout<<myQ.back()<<endl;

while(!myQ.empty()){
    cout<<" "<<myQ.front();
    myQ.pop();
}
cout<<myQ.front()<<endl;


priority_queue<int>myPQ;
myPQ.push(10);
myPQ.push(20);
myPQ.push(30);
myPQ.push(40);



    return 0;
}