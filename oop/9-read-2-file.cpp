// 16. Write a C++ program to read two files simultaneously.

#include <fstream>
#include <iostream>
using namespace std;

int main() {
  const int size = 100;
  char line[size];
  ifstream fin1, fin2;
  fin1.open("country.txt");
  fin2.open("capital.txt");
  while (fin1.eof() != 1) {
    if (fin1.eof() != 0) {
      cout << "Exit From Country\n";
      return 0;
    }
    fin1.getline(line, size);
    cout << "Capital of " << line << endl;
    if (fin2.eof() != 0) {
      cout << "Exit From Capital\n";
      return 0;
    }
    fin2.getline(line, size);
    cout << line << endl;
  }
}




/*
Sample Input/Output:

Capital of Bangladesh
Dhaka
Capital of Japan     
Tokyo

*/
