#include "Male.h"

using namespace std;

Male::Male()
{
  m_timeleft = 30;
}

int Male::get_timeleft()
{
  return m_timeleft;
}

void Male::day_passed()
{
  m_timeleft -=1;
}
