#include <iostream>
using namespace std;
double sum(long n){
    if(n==0){
        return 0;
    }else{
        return sum(n-1)+n;
    }
}
int main(){
    long  n=9;
    // cout<<sum(n);
    cout <<n*(n-1)/2;

    return 0;
}