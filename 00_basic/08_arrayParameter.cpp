#include <iostream>
using namespace std;
void fun(int A[ ],int size){   //call by adress then actual param can be changed
  cout<<"size of array in fun function "<<sizeof(A)/sizeof(int)<<endl;
//   for(int x:A){
//         cout<<x<<" ";
//     }
//     cout<<endl;                throws error

    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
    cout<<"printed using fun function"<<endl; 
}

int * fun1 (int size){
    int *p;
    // p=new int[size]; 
    // in c 
    p=(int*)malloc(size);
    for(int i=0;i<size;i++){
        p[i]=i+1;
    }
    return p;   // basically it return pointer pointing starting adress of array 
}
int main(){
    int A[]={2,4,6,8,10};
    int size=5;
  
    cout<<"size of array in main function "<<sizeof(A)/sizeof(int)<<endl;
    for(int x:A){ 
        cout<<x<<" ";
    }
    cout<<"printed using main function"<<endl;
    fun(A,size); 
    
    // return an array from function

    int *ptr,size1=7;
    ptr=fun1(size1); // now ptr is used as array in heap
    cout<<"returned from function ";
    for(int i=0;i<size1;i++){
        cout<<ptr[i]<<" ";
    }
    return 0;
}