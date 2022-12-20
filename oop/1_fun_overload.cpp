//Write a C++ program for calculating the volume of cube, cylinder and rectangle using the concept of function overloading.


#include<iostream>
using namespace std;

int volume(int);
long volume(long, int, int);
double volume(double, int);

int main()
{
    cout << volume(10) << endl;
    cout << volume(3, 8) << endl;
    cout << volume(10, 70, 10) << endl;

    return 0;
}

int volume (int s)                  //Cube
{
    return (s * s * s);
}

double volume (double r, int h)     //Cylinder
{
    return (3.1416 * r * r * h);
}


long volume (long l, int b, int h)  // Rectangle
{
    return (l * b * h);
}


// Output:
// 1000
// 226.195
// 7000

