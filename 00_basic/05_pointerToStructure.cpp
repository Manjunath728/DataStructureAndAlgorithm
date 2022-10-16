#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};
int main(){
    struct rectangle r={10,5}; // in cpp struct key word is not mandatory but mandatory in c
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;

    rectangle *p=&r;    // pointing to strucure
    cout<<p->length<<endl;    // p->length  used instaed of (*p).length becaise of shortcut
    cout<<p->breadth<<endl;

    // for c malloc is used for dynamically 

    rectangle *p1;
    p1=(struct rectangle*)malloc(sizeof(struct rectangle));//malloc return pointer of starting adress of heap.where inside size ids given 
    p1->length=15; //initializing  using pointer in heap 
    p1->breadth=7;
    cout<<p1->length<<endl; // accecing 
    cout<<p1->breadth<<endl;

// for c++ malloc not  is used for dynamically instaed new keyword is used
    rectangle *p2;
    p2=new rectangle; // just new and datatype 
    p2->length=8; //initializing  using pointer in heap 
    p2->breadth=9;
    cout<<p2->length<<endl; // accecing 
    cout<<p2->breadth<<endl; 



    return 0;
}