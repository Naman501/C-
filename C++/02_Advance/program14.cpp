#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct Corners{
    float a,b,c,d; //it is recommended to use a struct when there is no method inside a class.
};

ostream& operator<<(ostream& stream,const Corners& corner){
    stream<<corner.a<<" "<<corner.b<<" "<<corner.c<<" "<<corner.d;
    return stream;
}

int main(){

vector<int> inty;// it stores a  refrence

inty.push_back(7);
inty.push_back(8);
inty.push_back(9);


for (auto i=inty.begin(); i != inty.end(); ++i)
{
    // cout<<inty[i]<<endl;
    cout<< *i <<endl; // refrence can be accessed by pointers
}

vector<Corners> corners;

corners.push_back({1,2,3,5});
corners.push_back({7,9,0,6});


for (int i = 0; i<corners.size(); i++)
{
 cout<<   corners[i]<<endl;
}


    return 0;
}