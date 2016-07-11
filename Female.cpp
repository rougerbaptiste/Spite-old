#include "Female.h"
#include <time.h>
#include <random>

using namespace std;

Female::Female()
{
  m_cycleDaily=5;
  m_partner = -1;

  m_timeleft = rand()%30 +1;
  m_cycle = rand()%100 +1;
  m_spitePartner = false;

  m_gestating = false;
  m_gestation = 0;

}

void Female::new_born()
{
  m_cycleDaily=5;
  m_partner = -1;

  m_timeleft = 29 + rand()%3;
  m_cycle = -20;
  m_spitePartner = false;

  m_gestating = false;
  m_gestation = 0;
}

// Female::Female(int day)
// {
//   m_cycleDaily=5;
//   m_partner = -1;
//
//   m_timeleft = 29 + rand()%3;
//   m_cycle = -50;
// }

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


void Female::set_spitePartner(bool spite)
{
  m_spitePartner = spite;
}

int Female::get_gestation()
{
  return m_gestation;
}

void Female::set_gestating()
{
  m_gestating = true;
}

void Female::day_passed()
{
  m_timeleft -=1;

  // cout << 'v';

  if(m_gestating==false){
    m_cycle += m_cycleDaily;
    if(m_cycle > 125){
      m_cycle =0;
    }
  }
  else if(m_gestating==true){
    m_gestation += 30;
    // cout << 'p';
    if(m_gestation > 210){
      m_gestation =0;
      m_gestating = false;
      m_cycle = 0;
    }
  }
}
