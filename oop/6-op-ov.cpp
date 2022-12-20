// 10. Create a class float that contains one float data number. Overload all the four arithmetic operators for two objects.

#include <iostream>
using namespace std;

class Float
{
    float f1;

    public:
    void set(float f) {f1=f;}

    float operator+(Float ob) {return (f1+ob.f1);}
    float operator-(Float ob) {return (f1-ob.f1);}
    float operator*(Float ob) {return (f1*ob.f1);}
    float operator/(Float ob) {return (f1/ob.f1);}
};

int main()
{
    Float ob[2];
    int chk;

    ob[0].set(8.5);
    ob[1].set(3.2);

    while(1)
    {
        cout << "Choose your option:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;

        cin>>chk;
        switch(chk)
        {
            case 1:
                cout << "Addition: " << ob[0]+ob[1] << endl;
                break;
            case 2:
                cout << "Subtraction: " << ob[0]-ob[1] << endl;
                break;
            case 3:
                cout << "Multiplication: " << ob[0]*ob[1] << endl;
                break;
            case 4:
                cout << "Division: " << ob[0]/ob[1] << endl;
                break;
            case 5:
                return 0;
                break;
        }
        cout  << "\n";
    }
    return 0;
}


/*
Sample Input/Output:

Choose your option:
1. Addition        
2. Subtraction     
3. Multiplication
4. Division
5. Exit
1
Addition: 11.7

Choose your option:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
4
Division: 2.65625

Choose your option:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Exit
5

*/
