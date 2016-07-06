#include "Female.h"
#include <time.h>
#include <random>

using namespace std;

Female::Female()
{
  // srand (time(NULL));

  m_timeleft = 30;
  m_cycleDaily=5;
  m_cycle = rand()%100 +1;
}

int Female::get_timeleft()
{
  return m_timeleft;
}

int Female::get_cycle()
{
  return m_cycle;
}

void Female::day_passed()
{
  m_timeleft -=1;

  if(m_cycle < 100){
    m_cycle += m_cycleDaily;
  }

  if(m_cycle > 100){
    m_cycle = 100;
  }

}
