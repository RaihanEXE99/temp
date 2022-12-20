// Real & imaginary values, show() to display complex numbers.
// Write a program to add and subtract two complex numbers.

#include <iostream>
using namespace std;

class complex   //x + iy form
{
    float x;    //Real Part
    float y;    //Imaginary Part

    public:
    void input(float real, float imag)
    {
        x = real;
        y = imag;
    }

    friend complex sum(complex, complex);
    void subtract(complex, complex);
    void show();
};

complex sum(complex c1, complex c2)
{
    complex c3;     //Objects c3 is created

    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;

    return (c3);    //Returns object c3
}

void complex :: subtract(complex c1, complex c2)
{
    x = c1.x - c2.x;
    y = c1.y - c2.y;
}

void complex :: show()
{
    cout << x << " + i" << y << endl;
}

int main()
{
    complex A, B, C, D;

    A.input(3.1, 5.65);
    B.input(2.75, 1.2);

    C = sum(A, B);          //C = A + B
    D.subtract(A, B);       //D = A - B

    cout << "A= ";
    A.show();

    cout << "B= ";
    B.show();

    cout << "C= ";
    C.show();

    cout << "D= ";
    D.show();

    return 0;
}


// Sample Output:
// A= 3.1 + i5.65     
// B= 2.75 + i1.2     
// C= 5.85 + i6.85    
// D= 0.35 + i4.45 

