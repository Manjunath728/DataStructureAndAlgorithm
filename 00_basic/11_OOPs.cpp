#include <iostream>
using namespace std;
class rectangle 
{
    int length;
    int breadth;

public:
    rectangle(){length=0;breadth=0;}
    rectangle (  int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }
    int area( )
    {
        return length * breadth;
    }
    void setLength(int length)
    {
        this->length = length;
    }
    void setBreadth(int breadth)
    {
        this->breadth = breadth;
    }
    
    int getLength();
    int getBreadth();

};
int rectangle::getLength(){  // defing function outside of the class using :: operater
    return length;
}
int rectangle::getBreadth(){  
    return breadth;
}
 int main()
{
    rectangle r1(10,20);
    
    cout << "length: " << r1.getLength()<< " breadth: " << r1.getBreadth()<< " area: " << r1.area() << endl;
    r1.setLength(30);
    r1.setBreadth(30);
    cout << "length: " << r1.getLength()<< " breadth: " << r1.getBreadth()<< " area: " << r1.area() << endl;

    return 0;
}