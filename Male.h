#ifndef DEF_MALE
#define DEF_MALE

#include <iostream>
#include <string>

class Male
{

 public:

  Male();
  int get_timeleft();
  void day_passed();



 private:

  int m_timeleft;

};

#endif
