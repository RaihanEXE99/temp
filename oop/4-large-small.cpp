/*A C++ Program to demonstrate how friend functions work
as a bridge between the classes.
Write a program to find the largest and smallest number
between two numbers of different classes.*/

#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int x;      //Forward Declaration

    public:

    void setvalue(int i)
    {
        x = i;
    }

    friend void max(XYZ, ABC);
    friend void min (XYZ, ABC);
};

class ABC
{
    int a;

    public:

    void setvalue(int i)
    {
        a = i;
    }

    friend void max(XYZ, ABC);
    friend void min(XYZ, ABC);
};

void max(XYZ m, ABC n)      //Definition of Friend
{
    if(m.x >= n.a)
        cout << "Largest Number Is: " << m.x << endl;

    else
        cout << "Largest Number Is: " << n.a << endl;
}

void min(XYZ m, ABC n)      //Definition of Friend
{
    if(m.x <= n.a)
        cout << "Smallest Number Is: " << m.x << endl;

    else
        cout << "Smallest Number Is: " << n.a << endl;
}

int main()
{
    ABC abc;
    abc.setvalue(10);

    XYZ xyz;
    xyz.setvalue(20);

    max(xyz, abc);
    min(xyz, abc);

    return 0;
}


// Sample Output:
// Largest Number Is: 20 
// Smallest Number Is: 10

