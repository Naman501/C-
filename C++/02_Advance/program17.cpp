#include<iostream>
#include<string>

constexpr int maxbuffer=2024;

using namespace std;


int main(){

const char * filename="mythisfile.txt";
const char * information = "lorem ipsum dolor sit amet";

FILE *fh=fopen(filename,"w");
for(int i=0;i<50;++i){
    fputs(information,fh);
}
rename(filename,information);
fclose(fh);
    return 0;
}