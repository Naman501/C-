#include<iostream>
#include<algorithm> 
#include<string>
using namespace std;

int main(){


int numbers[6]= {3,2,6,4,9,7};

cout<<"Unsorted values: "<<endl;
for(int n : numbers){
    cout<<n<<" "<<endl;
}

sort(numbers,numbers+6);
// sort_heap(numbers,numbers+6);

if (binary_search(numbers,numbers+6,1))
{
 cout<<  "Number Found!"<< endl; /* code */
}else{
    cout<<"Number Not Found!"<<endl;
}
;

cout<<"Sorted values: "<<endl;
for(int n : numbers){
    cout<<n<<" "<<endl;
}
    return 0;
}