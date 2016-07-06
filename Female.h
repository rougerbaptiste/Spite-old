#ifndef DEF_FEMALE
#define DEF_FEMALE

#include <iostream>
#include <string>

class Female
{

 public:

  Female();
  int get_timeleft();
  void day_passed();



 private:

  int m_timeleft;

};

#endif
