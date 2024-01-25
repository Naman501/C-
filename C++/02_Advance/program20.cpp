#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;

int main(){


float numbers[6]= {3.1,2.1,6.1,4.1,9.1,7.1};

cout<<"Unsorted values: "<<endl;
for(float n : numbers){
    cout<<n<<" "<<endl;
}

sort(numbers,numbers+6);
// sort_heap(numbers,numbers+6);

cout<<"Sorted values: "<<endl;
for(float n : numbers){
    cout<<n<<" "<<endl;
}
    return 0;
}