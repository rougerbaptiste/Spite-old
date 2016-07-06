#include "Female.h"
#include <time.h>
#include <random>

using namespace std;

Female::Female()
{
  // srand (time(NULL));

  m_timeleft = 25 + rand()%10 +1;
  m_cycleDaily=5;
  m_cycle = rand()%100 +1;

  m_partner = -1;
}

int Female::get_timeleft()
{
  return m_timeleft;
}

int Female::get_cycle()
{
  return m_cycle;
}

void Female::set_partner(int number)
{
  m_partner = number;
}

void Female::remove_partner()
{
  m_partner = -1;
}

int Female::get_partner()
{
  return m_partner;
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
