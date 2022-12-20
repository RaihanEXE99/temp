/* 14. Create an abstract base class called shape. Derive class rectangle from the base class shape and a class cube from the rectangle class.

Data members : Length, width for class rectangle Height for class cube
Member function : Area(), print() for class rectangle Volume(), print() for class cube

Make function print() as virtual and declare as a pure virtual function in the base class.
Write a main program to compute the area of rectangle and volume of cube and display the result using base class pointer. */

#include <iostream>
using namespace std;

class shape
{
    public:
    virtual void print() = 0;
};

class rectangular : public shape
{
    float length, width, ar;

    public:
    void area(float i, float j)
    {
        length = i; width = j;
        ar = length * width;
    }

    void print() {cout << "Area: " << ar << endl;}
};

class cube : public rectangular
{
    float height, vol;

    public:
    void volume(float h)
    {
        height = h;
        vol = height * height * height;
    }

    void print() {cout << "Volume: " << vol << endl;}
};

int main()
{
    rectangular ob1;
    cube ob2;
    shape *sptr;

    ob1.area(5, 3);
    sptr = &ob1;
    sptr -> print();

    ob2.volume(3);
    sptr = &ob2;
    sptr -> print();
}

/*
Sample Input/Output:

Area: 15
Volume: 27

*/
