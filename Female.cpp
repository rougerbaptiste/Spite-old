#include "Female.h"

using namespace std;

Female::Female()
{
  m_timeleft = 30;
}

int Female::get_timeleft()
{
  return m_timeleft;
}

void Female::day_passed()
{
  m_timeleft -=1;
}
