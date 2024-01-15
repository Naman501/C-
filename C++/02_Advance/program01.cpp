#include<iostream>
#include<string>
using namespace std;

class User{

int secret=69;

public:
string name ="default";
void classMessage();
  void setSecret(const int & newsecret)
    {
        secret = newsecret;

    }
    int getSecret() const {return secret;}

};

 void User :: classMessage(){
    cout << "Class Is Great," << name << endl;
  
}

int main(){


User sam;

sam.name="Sam";
sam.classMessage();
// sam.secret=033;    => inaccessable

sam.setSecret(989);
cout<<sam.getSecret()<<endl;

User Naman;
Naman.classMessage();


const User rock;
cout<<rock.getSecret()<<endl;

    return 0;
}