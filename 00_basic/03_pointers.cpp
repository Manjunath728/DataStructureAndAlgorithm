#include<iostream>>
using namespace std;

int main(){
    int a=10;
    int *p;// declaration
    p=&a; //initialization or reffering

    cout<<*p<<endl; //derefering
    cout <<p<<" "<<&a<<endl; // both are adress of a
    cout<<endl;
    int A[3]={1,2,3};
    int *p1;
    p1=A; // no need to add & because A only adrees oss of starting adress of array
    p1[0]=1;
    p1[1]=2;
    p1[2]=3;
    for(int i=0;i<3;i++)
    cout<<p1[i]<<endl;  
    cout<<endl;
    int *p2;
    p2=new int[3];  // now array of length ids diclared dicretly in heap dynamic allocation
    p2[0]=11; p2[1]=22; p2[2]=33;
    for(int i=0;i<3;i++)
    cout<<p2[i]<<endl;

    delete [] p2; // must release allocated memory must in big projects     


    int *p3;
    char *p4;
    float *p5;
    double *p6;

    cout<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;
    cout<<sizeof(p6)<<endl;// every type of pointer take 4 bytes of memory becouse its store adress not values


    return 0; 
}