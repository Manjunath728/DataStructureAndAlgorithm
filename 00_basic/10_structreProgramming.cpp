#include <iostream>
using namespace std;
struct rectangle{
int length;
int breadth;
};
void initialize(struct rectangle *rp,int length , int breadth){
    rp->length=length;
    rp->breadth=breadth;
}
int area(struct rectangle r){
    return r.length*r.breadth;
}
void setLength(struct rectangle *rp,int length){
    rp->length=length;
}
void setBreadth(struct rectangle *rp,int breadth){
     rp->breadth=breadth;
}
int main(){
    struct rectangle r1;
    initialize(&r1,10,20);
    cout<<"area: "<<area(r1)<<endl;
    setLength(&r1,30);
    setBreadth(&r1,30);
    cout<<"area: "<<area(r1)<<endl;
    

    return 0;
}