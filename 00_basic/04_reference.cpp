#include <iostream>
using namespace std;
int main(){
    // reference means alias for variable ie  a or r -- a/r
    int a=10;
    int &r=a;// must initialize while declaring (reference means another name)
   
    cout<<a<<endl;
    cout<<r<<endl;
    r++;

    cout<<a<<endl;
    cout<<r<<endl;
    
    return 0;
}