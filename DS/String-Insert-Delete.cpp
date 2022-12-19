//Insertion & Deletion Operation Using C++

#include<iostream>
#include<string>
using namespace std;

//Function to demonstrate insert
void insert(string str1 ,string str2)
{
    //Insert str2 in str1 starting
    //From 6th index of str1
    str1.insert(6, str2);
    cout << "Using Insert: ";
    cout << str1 << endl;
}

//Function to demonstrate erase
void remove(string str)
{
    //Deletes 4  charecters from index number 1
    str.erase(1, 4);

    cout << "After Erase: ";
    cout << str << endl;

}

int main ()
{
    string str1("Hello World! ");
    string str2("GeeksforGeeks ");
    string str("Hello World!");

    //Insert Operation
    cout << "Original String: " << str1 << endl;

    insert(str1 ,str2);

    //Delete Operation
    cout << "\nBefore Erase: ";
    cout << str << endl;

    remove(str);

    return 0;
}


// Sample Output:

// Original String: Hello World!
// Using Insert: Hello GeeksforGeeks World!

// Before Erase: Hello World!
// After Erase: H World!


