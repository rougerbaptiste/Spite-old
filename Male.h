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



 private:

  int m_timeleft;
  int m_resplenish;
  int m_resplDaily;
  bool m_spite;
  int m_beforeReady;
  bool m_ready;

};

#endif
