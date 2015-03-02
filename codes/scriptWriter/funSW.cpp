#include <string>

#include "headerSW.h"

void MyClass::foo()
{
}

std::string removeSpaces(std::string input)
{
  input.erase(remove(input.begin(),input.end(),' '),input.end());
  return input;
}

/*
std::string::erase returns an iterator, but you don't have to use it. Your original string is modified.

string removeSpaces(string input)
{
  input.erase(std::remove(input.begin(),input.end(),' '),input.end());
  return input
}
*/
