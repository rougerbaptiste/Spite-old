#include <iostream>
#include "Female.h"
#include "Male.h"

#include <time.h>
#include <random>

using namespace std;

int main()
{
  cout << "Hello World" << endl;

  srand (time(NULL));

  Female test;

  Male test2;

  cout << test.get_cycle() << endl;
  cout << test2.get_respl() << endl;

  test.day_passed();
  test2.day_passed();

  cout << test.get_cycle() << endl;
  cout << test2.get_respl() << endl;

  return 0;
}
