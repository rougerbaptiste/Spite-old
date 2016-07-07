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
  void new_born();
  void set_spitePartner(bool spite);



 private:

  int m_timeleft;
  int m_cycle;
  int m_cycleDaily;
  int m_partner;
  bool m_spitePartner;

};

#endif
