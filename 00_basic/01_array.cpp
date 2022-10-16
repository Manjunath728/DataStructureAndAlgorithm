#include <iostream>
using namespace std;

int main()
{

    // delclarations
    int a[5];
    a[0] = 1; // array of size a
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    int b[5] = {1, 2, 3, 4, 5}; // delclaration with initialization of array

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    for (int x : b) // for each in c++
    {
        cout << x << endl;
    }
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int c[n]; // we can declare using variable  can not initialize
    // int a[n]={1,2,3,4,5,6,7,8,9} throws error
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    for (int x : c)
    {
        cout << x << endl;
    }
    return 0;
}