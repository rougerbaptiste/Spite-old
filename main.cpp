#include <iostream>
#include "Female.h"
#include "Male.h"

using namespace std;

int main()
{

   cout << "Hello World" << endl;


   Female test;

   Male test2;

   cout << test.get_timeleft() << endl;
   cout << test2.get_timeleft() << endl;

   test.day_passed();
   test2.day_passed();

   cout << test.get_timeleft() << endl;
   cout << test2.get_timeleft() << endl;


  return 0;
}
