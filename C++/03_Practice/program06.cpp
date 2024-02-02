#include<bits/stdc++.h>
// #include<utility>

using namespace std;



void print(){
       cout<<"Naman"<<endl;
}

//Pairs
void explainPair(){
    pair<int,int> p={1,7};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int ,pair<int,int>> p2={1,{2,3}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int,int> arr[]={ {1,2} , {3,4} , {69,6} };
    cout<<arr[2].first<<endl;
}

//vectors
void explainVector(){
     cout<<endl;
    vector<int> v;

    v.push_back(0);
    v.emplace_back(1); // better than push-back

    vector<pair<int,int>> vec;
    vec.push_back({1,5});
    vec.emplace_back(8,9);

    vector<int> v7(5,100);
    vector<int> v8(5);  // either all 0 (or) garbage values......Depends on the compiler

    vector<int> v1(5,20);
    vector<int> v2(v1);

    
    vector<int>::iterator it=v.begin();
    it++;
    cout<< *(it)<<" "<<endl;

    it=it+2;
    cout<< *(it)<<" "<<endl;

    // vector<int>::iterator it=v.rend();
    vector<int>::iterator it2 =v7.end();
    // vector<int>::iterator it=v8.rbegin();


cout<<v7[0]<<" "<<v7.at(0)<<endl;
cout<<v7.back()<<" "<<endl;
cout<<endl;

for(vector<int>::iterator it=v7.begin();it!=v7.end();it++){
    cout<<*(it)<<" "<<endl;
}
}



int main(){

int a;
cin>>a;

cout<<a<<endl;
print();


explainPair();
explainVector();

    return 0;
}