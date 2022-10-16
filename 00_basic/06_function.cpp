#include <iostream>
using namespace std;
int add(int a, int b){  // function definition 
    return (a+b); //function deffination and return
}
int main(){
    int a=10,b=5;
    cout<<"Sum of two number "<<add(a,b)<<endl; // function called

    return 0;
}