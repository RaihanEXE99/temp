/*

(Program to Inherit a Class)

Given the following base class: 
class area_cl
{
    public:
        double height;
        double width;
};
Create two derived classes called rectangle and isosceles that inherit area_cl. Have each 
class include a function area () that returns the area of a rectangle isosceles triangle, as 
appropriate. Use parameterized constructors to initialize height and width. Write the 
complete program.

*/

#include <iostream>
using namespace std;

class area_cl
{
    public: 
        double height;
        double width;
};

class rectangle : public area_cl
{
    public:
        rectangle(double h, double w)
        {
            height = h;
            width = w;
        }

        double area()
        {
            return (height * width);
        }
};

class isosceles : public area_cl
{
    public:
        isosceles(double h, double w)
        {
            height = h;
            width = w;
        }

        double area()
        {
            return (0.5 * height * width);
        }
};


int main()
{
    cout << "Claculate The Area\n==================\n\n";

    double h, w;

    cout << "Enter Height: ";
    cin >> h;

    cout << "Enter Width: ";
    cin >> w;

    rectangle ob1(h, w);
    isosceles ob2(h, w);

    cout <<"\nArea of Rectangle: " << ob1.area();
    cout << "\nArea of Isosceles: " << ob2.area() << endl;

    return 0;
}

/*
Sample Input/Output:

Claculate The Area
==================

Enter Height: 10
Enter Width: 20

Area of Rectangle: 200
Area of Isosceles: 100

*/
