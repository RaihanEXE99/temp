/*
Lab Class- 6 (Group- Q)
Date: 21-08-2022
13. Deletation in a String

*/

#include<iostream>
#include<string>
using namespace std;

void deleteDemo(string str)
{
    str.erase(1, 4);

    cout << "After Erase: " << str << endl;
}

int main()
{
    string str("Hello World!");

    cout << "Before Erase: " << str << endl;

    deleteDemo(str);

    return 0;
}


/*
Sample Input/Output:

Before Erase: Hello World!
After Erase: H World!

*/

