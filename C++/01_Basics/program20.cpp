#include<iostream>
using namespace std;

struct User{
  const int uId;
  const char *name; // const maeks the pointer pointing is always towards that refrence.
  const char *email;
  int course_count;  
};

int main(){


    User mickey ={001,"Mickey","mickey@cartoon.com",2};
    // mickey.uid=123
    User Donald ={002,"Donald","donald@cartoon.com",4};

    User *d = &Donald;

    cout<<mickey.uId<<endl;
    cout<<Donald.email<<endl;
    cout<<Donald.course_count<<endl;

    Donald.course_count=07;

    cout<<Donald.course_count<<endl;

    // Donald.uId=222;  'const' => so it is not mutable

    d->course_count=9;// arrow is used as dot

    cout<<Donald.course_count<<endl;


    return 0;
}