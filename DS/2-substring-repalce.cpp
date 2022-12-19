// 2. Write a C/C++ program to replace a substring into a text.

#include<iostream>  
// #include<cstring>
using namespace std; 

int  main()  
{  
    string str1 = "Hello World";
    string str2 = "Program";

    cout << "Before Replace: "<< str1 << endl;

    str1.replace(6, 5, str2);   // replace(Position, Length, String)

    cout << "After Repalce: "<< str1 << endl;

    return 0;
}


/*
Sample Input/Output:

Before Replace: Hello World
After Repalce: Hello Program

*/

