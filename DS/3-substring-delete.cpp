// 3. Write a C/C++ program to delete a substring from a text

#include<iostream>
#include<string>
using namespace std;


int main()
{
    string str("Hello World!");

    cout << "Before Erase: " << str << endl;

    str.erase(5, 6);    // erase(Position, Length)

    cout << "After Erase: " << str << endl;

    return 0;
}


/*
Sample Input/Output:

Before Erase: Hello World!
After Erase: Hello!

*/
