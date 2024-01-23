//STL

//Iterators : Loop Them like VEctors.
//Functors:manage state,parametrized(Function-Operators)
//Algorithms:Searching & Sorting

//Containers: Implementation of well-defined data structures
//Sequence Types-Vectors,list,deques,stacks,queues
//Associative Types- Set,multisets,maps,multimaps(binary trees)
//Unordered Associative Types -Set,multisets,mapsmnultimaps(hash maps)

#include<iostream>
using namespace std;

class MyFloat{
    float ft;
    public:
    MyFloat(){
        ft=0.01;
    }
    void getValues(){
        cout << ft<< endl;
    }

void operator ()(float v){
    ft += v;
}

};



int main(){


MyFloat floaty;
floaty.getValues();

// floaty.addValue(0.1);
floaty(9);
floaty(1);
floaty.getValues();


    return 0;
}