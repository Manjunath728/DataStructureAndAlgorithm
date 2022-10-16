#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void fun1(struct rectangle r1){ // basically call by value
    r1.length=100;
    cout << "inside  function 'fun1' value are"<<endl<< "length: " << r1.length << " breadth: " << r1.breadth<<endl;
}
void fun2(struct rectangle &r1){ // basically call by reference
    r1.length=100;
    cout << "inside  function 'fun' value are"<<endl<< "length: " << r1.length << " breadth: " << r1.breadth<<endl;
}
void fun3(struct rectangle *r1){ // basically call by reference
    r1->length=200; // instaed of (*r1).
    cout << "inside  function 'fun' value are"<<endl<< "length: " << r1->length << " breadth: " << r1->breadth<<endl;
}
struct rectangle * fun4(){
    struct rectangle *rp;
    rp=new rectangle;
    rp->length=20;
    rp->breadth=40;
    return rp;

}
int main()
{
    struct rectangle r = {10, 5};
    cout<<"call by value"<<endl;
    fun1(r);
    cout << "inside  main function value are"<<endl<< "length: " << r.length << " breadth: " << r.breadth<<endl<<endl;
    cout<<"call by refrence"<<endl;
    fun2(r);
    cout << "inside  main function value are"<<endl<< "length: " << r.length << " breadth: " << r.breadth<<endl<<endl;
    cout<<"call by adress"<<endl;
    fun3(&r); // & is importatnt
    cout << "inside  main function value are"<<endl<< "length: " << r.length << " breadth: " << r.breadth<<endl<<endl;

    
    // dynamically returned struct from function
    struct rectangle *rptr;
    cout<<"dynamically returned struct from function"<<endl;
    rptr=fun4();
    cout << "inside main function  value are"<<endl<< "length: " << rptr->length << " breadth: " << rptr->breadth<<endl;




    return 0;
}