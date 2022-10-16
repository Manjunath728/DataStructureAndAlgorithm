#include <iostream>
using namespace std;
template <class T> //T  can be  used as as any type of datatypes like int float double long
class rectangle 
{
    T length;
    T breadth;

public:
    rectangle(){length=0;breadth=0;}
    rectangle (  T length, T breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    T area( )
    {
        return length * breadth;
    }
    void setLength(T length)
    {
        this->length = length;
    }
    void setBreadth(T breadth)
    {
        this->breadth = breadth;
    }
    T getLength();
    T getBreadth();
};
template <class T> // use every time
T rectangle<T>::getLength(){  // if using outside class for defining function then rement=er to add <T> in name of class
    return length;
}
template <class T>
T rectangle<T>::getBreadth(){  
    return breadth;
}
 int main()
{
    rectangle<int> r1(10,20);
    // rectangle<float> r1(10.1,20.3);   // specifing is importatnt which you are using present now
    
    cout << "length: " << r1.getLength()<< " breadth: " << r1.getBreadth()<< " area: " << r1.area() << endl;
    r1.setLength(30);
    r1.setBreadth(30);
    cout << "length: " << r1.getLength()<< " breadth: " << r1.getBreadth()<< " area: " << r1.area() << endl;

    return 0;
}