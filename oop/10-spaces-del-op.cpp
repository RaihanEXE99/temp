// 17. Write a C++ program to perform the deletion of white spaces such as horizontal tab, vertical tab, space, line feed, new line and carriage return from a text file and to store the contents of the file without white spaces on another file.

#include <fstream>
#include <iostream>
using namespace std;
int main() {
  fstream file1, file2;
  file1.open("main.txt", ios::in);
  file2.open("copy.txt", ios::out);
  char key;
  while (!file1.eof()) {
    file1.get(key);
    if (key != ' ' && key != '\n' && key != '\t' && key != '\r' && key != '\f' && key != '\v')
      file2 << key;
  }
  file1.close();
  file2.close();
}
