#include <iostream>
using namespace std;
void funB(int n);
void funA(int n){
    if(n>0){
        cout<<n<<" ";
        funB(n-1);
    }
}
void funB(int n){
    if(n>0){
        cout<<n<<" ";
        funA(n/2);
    }
}
int main(){
    int n=20;
    funA(20);

    return 0;
}