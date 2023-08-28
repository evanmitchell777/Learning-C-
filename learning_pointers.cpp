#include <iostream>

using namespace std;



class Person
{
public:
  string name;
  int age;

};

int
main (int argc, char **argv)
{
  Person Evan;
  Person *ptrEvan = &Evan;
  ptrEvan->name = "Evan ";
  ptrEvan->age =22;

  cout << "your name is " << ptrEvan->name;
  cout << "your age is " << ptrEvan->age;
  return 0;
}
