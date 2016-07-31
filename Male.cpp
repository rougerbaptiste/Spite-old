#include "Male.h"

#include <time.h>
#include <random>


using namespace std;



Male::Male()
{
  // srand (time(NULL));

  m_timeleft = rand()%40 +1;
  m_resplenish = rand()%100 +1;
  m_resplDaily = 10;
  m_partner = -1;

  int testSpite (-1);
  testSpite = rand()%2;
  testSpite = 1;
  if(testSpite == 0){
    m_spite = true;
    m_beforeReady = rand()%100 +1;
  }
  else{
    m_spite = false;
    m_beforeReady = 100;
  }

  if(m_resplenish == 100){
    m_ready = true;
  }
}

void Male::new_born(bool spite)
{
  m_timeleft = 39 + rand()%3;
  m_resplenish = -50;
  m_resplDaily = 10;
  m_partner = -1;
  m_ready = false;

  if(spite == true){
    m_spite = true;
    m_beforeReady = rand()%100 +1;
  }
  else{
    m_spite = false;
    m_beforeReady = 100;
  }

}

int Male::get_timeleft()
{
  return m_timeleft;
}

int Male::get_respl()
{
  return m_resplenish;
}

void Male::set_partner(int number)
{
  m_partner = number;
}

void Male::remove_partner()
{
  m_partner = -1;
}

int Male::get_partner()
{
  return m_partner;
}

bool Male::get_ready()
{
  return m_ready;
}

int Male::get_beforeReady()
{
  return m_beforeReady;
}


bool Male::get_spite()
{
  return m_spite;
}

int Male::get_percentRespl()
{
  return m_resplenish;
}

void Male::day_passed()
{
  m_timeleft -=1;


  if(m_resplenish < 100){
    m_resplenish += m_resplDaily;
  }

  if(m_resplenish > 100){
    m_resplenish = 100;
  }

  if( (m_resplenish == 100) & (m_spite==false) ){
    m_ready = true;
  }
  else if ( (m_resplenish >= (100 - m_beforeReady)) & (m_spite==true) ) {
    m_ready = true;
  }
}
