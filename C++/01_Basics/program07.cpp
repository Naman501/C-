// short int                  unsigned short int       16 
//int                         unsigned int             32
//long int                    unsigned long int        64
//long long int               unsigned long long int   64

#include<iostream>
#include<cstdint>

int main(){

    printf("Size of this Data type is %ld bits. \n",sizeof(uint16_t)*8);

    int fun=0x16;
    printf("Fun Value is %d \n", fun);
    return 0;
}
