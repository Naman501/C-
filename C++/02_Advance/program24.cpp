#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main(){

//doubly lnk list => List


            list<int> myList;

    for (int i = 3; i <=10; i++)
    {
        myList.push_back(i);
        // myList.push_front(91);
    }
    
    cout<<myList.front()<<endl;
    cout<<myList.back()<<endl;
// cout<<myList.begin();

 myList.pop_back();
    // myList.pop_front();
    cout<<myList.front()<<endl;
    cout<<myList.back()<<endl;

    myList.reverse();
    myList.sort();
    for (auto i : myList)
    {
            cout<<i<< " ";
    }
    cout<<endl;

    return 0;
}