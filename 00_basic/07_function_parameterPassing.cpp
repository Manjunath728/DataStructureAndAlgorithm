#include <iostream>
using namespace std;
void swap1(int a, int b){
    //call by value 
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap2(int *a, int *b){
    //call by address
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void swap3(int &a, int &b){
    //call by refrence
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    swap1(x,y);

    cout<<x<<" "<<y<<endl;
    
    swap2(&x,&y);

    cout<<x<<" "<<y<<endl;

    swap3(x,y);

    cout<<x<<" "<<y<<endl;

    return 0;
}