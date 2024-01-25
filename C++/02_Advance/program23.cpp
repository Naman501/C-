#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

vector<int> nums;
vector<string> Heros{"Flash","Batman","Spiderman","IronMan"};

nums.push_back(6);
nums.push_back(7);
nums.push_back(9);
nums.push_back(6);

for(int i=0;i<=4;++i){
    nums.push_back(i);
}


cout<<nums.size()<<endl<<nums.capacity()<<endl<<nums.max_size()<<endl;

cout<<nums.empty()<<endl;

for(auto i=nums.begin();i != nums.end();++i){
    cout<<*i<<endl;
}

    return 0; 
}