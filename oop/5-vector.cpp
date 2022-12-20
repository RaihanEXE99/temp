// 5. Using class write a program that would be able to do the following task:
// a) To create the vector.
// b) To add the value of a two vector
// c) To display the vector in the form (ai+bj+ck)


#include<iostream>
using namespace std;

class vector
{
    float i, j , k;
    int n;

    public:
        void create();
        void show();
        friend void add(vector, vector);
};

void vector :: create()
{
    cout << "Enter The Value of i, j, k: ";
    cin >> i >> j >> k;
}

void vector :: show()
{
    cout << "The Vector is: " << i << "i + " << j << "j + " << k << "k\n" << endl;
}

void add(vector a, vector b)
{
    vector c;

    c.i = a.i + b.i;
    c.j = a.j + b.j;
    c.k = a.k + b.k;

    cout << "After Summation\n";
    c.show();
} 

int main()
{
    vector p, q;

    p.create();
    p.show();

    q.create();
    q.show();

    add(p, q);

    return 0;
}



// Sample Input/Output:
// Enter The Value of i, j, k: 1 2 3
// The Vector is: 1i + 2j + 3k 

// Enter The Value of i, j, k: 4 5 6
// The Vector is: 4i + 5j + 6k

// After Summation
// The Vector is: 5i + 7j + 9k

