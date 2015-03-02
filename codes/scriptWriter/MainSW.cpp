#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "headerSW.h"

int main () {
  string line;
  MyClass a;
  a.foo();
  ifstream myfile ("rawScript.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
