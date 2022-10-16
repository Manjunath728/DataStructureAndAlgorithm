#include<iostream>
using namespace std;
struct rectangle 
{
    int length;
    int breadth; 
    char x;    // but it will take 4 byte insted 1 byte add padding for remaing 3
}rGlobal;                 // for global struct

int main(){
    struct rectangle r1; //  delcaration
    struct rectangle r2={1,2,'f'}; //  delcaration and initialization
    printf("%lu\n",sizeof(r2));

   r2.length=10;
    r2.breadth=20;   //modifing

    cout<<r2.length<<endl;
    cout<<r2.breadth<<endl;
    return 0;
}