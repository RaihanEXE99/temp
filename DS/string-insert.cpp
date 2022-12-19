/*
Lab Class- 6 (Group- Q)
Date: 21-08-2022
12. Insertion in a String

*/

#include<iostream>
#include<string>
using namespace std;

void insertDemo(string str1, string str2)
{
    str1.insert(6, str2);

    cout << "Using Insert: " << str1 << endl;
}

int main()
{
    string str1("Hello World! ");
    string str2("GeeksforGeeks ");

    cout << "Original String: " << str1 << endl;

    insertDemo(str1, str2);

    return 0;
}

/*
Sample Input/Output:

Original String: Hello World!
Using Insert: Hello GeeksforGeeks World!

*/

