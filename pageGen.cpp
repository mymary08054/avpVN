#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream genP ("genPage.txt");
  ifstream rawP ("rawPage.txt");
  //if (rawP.is_open() && genP.is_open())
  {
    printf("GOT HERE");
    genP << "var page = new Array();\npage.push(\n{";
    
    string line, page;
    while(getline(rawP,line))
    {
      
    }

    genP.close();
    rawP.close();
  }
  return 0;
  }
