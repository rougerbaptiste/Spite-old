#ifndef DEF_FEMALE
#define DEF_FEMALE

#include <iostream>
#include <string>


class Female
{

 public:

  Female();
  int get_timeleft();
  int get_cycle();
  void day_passed();
  void set_partner(int number);
  void remove_partner();
  int get_partner();



 private:

  int m_timeleft;
  int m_cycle;
  int m_cycleDaily;
  int m_partner;

};

#endif
