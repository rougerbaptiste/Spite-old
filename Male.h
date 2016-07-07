#ifndef DEF_MALE
#define DEF_MALE

#include <iostream>
#include <string>

class Male
{

 public:

  Male();
  int get_timeleft();
  int get_respl();
  void day_passed();
  void set_partner(int number);
  void remove_partner();
  int get_partner();
  bool get_ready();
  int get_beforeReady();
  bool get_spite();



 private:

  int m_timeleft;
  int m_resplenish;
  int m_resplDaily;
  bool m_spite;
  int m_beforeReady;
  bool m_ready;
  int m_partner;

};

#endif
