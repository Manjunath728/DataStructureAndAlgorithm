#include <iostream>
using namespace std;
int pow(int m,int n){
    if(n==0){
        return 1;
    }else{
        return pow(m,n-1)*m;
    }
}
int pow1(int m,int n){
    if(n==0)
    {
        return 1;
    } else if(n%2==0){
        return pow(m*m,n/2);
    }else{
        return m*pow(m*m,n/2);
    }
}
int main(){ 
    cout<<pow(3,2)<<endl;// 6 power of 3
    cout<<pow1(3,2)<<endl;// 6 power of 3
    return 0;
}