#include <iostream>
#include "Female.h"
#include "Male.h"

#include <vector>
#include <time.h>
#include <random>

using namespace std;

int main()
{
  srand (time(NULL));

  int length (100);
  int fem_nb (20);
  int mal_nb (20);

  int day (0);

  Female females [fem_nb];
  Male males [mal_nb];
  while (day < length) {

    // cout << females[1].get_timeleft() << endl;
    // cout << males[1].get_timeleft() << endl << endl;
    // males are looking for partners



    vector<int> birthingFemales;
    for(int i(0); i < fem_nb; i++){
      if(females[i].get_gestation() >= 100){
        // cout << "plop" << endl;
        birthingFemales.push_back(i);
      }
    }

    cout << birthingFemales.size() << endl ; //<< endl;

    // create a vector with the females that can give birth
    for(int i(0); i < fem_nb; i++){
      // cout << (birthingFemales.size() > 0) << endl;
      if((females[i].get_timeleft() <= 0) & (birthingFemales.size() > 0) ){
        // cout << "plouf" << endl << endl;
        females[i].new_born();

        // cout << females[i].get_cycle() << endl << females[i].get_timeleft() << endl << females[i].get_gestation() << endl << endl;
      }
    }

    // simple birthing for males.
    for(int i(0); i < mal_nb; i++){
      if( (males[i].get_timeleft() <= 0) & (birthingFemales.size() > 0) ){
        // cout << "ploup" << endl << endl;
        males[i].new_born();
      }
    }


    for (int i (0); i < mal_nb; i++) {
      if(  (males[i].get_partner()==-1) & (males[i].get_ready() == true)){ // the male is not grip to a female
        bool found (false);
        int maxTries (0.3*fem_nb), tries(1);

        while( (tries < maxTries) & (found != true)){

          int pickedFem (rand()%fem_nb);
          if((females[pickedFem].get_partner()==-1) & (females[pickedFem].get_cycle() >= males[i].get_beforeReady() ) ){
            females[pickedFem].set_partner(i);
            females[pickedFem].set_spitePartner(males[i].get_spite());
            males[i].set_partner(pickedFem);
            found = true;
          }
          tries +=1;
        }

      }
    }




    for(int i(0); i < fem_nb; i++){
      females[i].day_passed();
      if( (females[i].get_cycle()>=100) & (females[i].get_partner() != -1) ){
          females[i].set_gestating();
      }
    }
    for(int i(0); i < mal_nb; i++){
      males[i].day_passed();
    }
    for(int i(0); i < fem_nb; i++){
      if( (males[females[i].get_partner()].get_timeleft() <=0) & (females[i].get_gestation() != true) ){
        females[i].set_partner(-1);
        females[i].set_spitePartner(false);
      }
    }
    for(int i(0); i < mal_nb; i++){
      if( females[males[i].get_partner()].get_cycle() >= 100){
        males[i].set_partner(-1);
      }
      if( females[males[i].get_partner()].get_timeleft() <=0 ){
        males[i].set_partner(-1);
      }
    }

    day +=1;
  }

  // cout << "Hello World" << endl;
  //
  //
  //
  // Female test [5];
  //
  // for(int i(0); i < 5; i++){
  //
  //   cout << test[i].get_cycle() << endl;
  //
  // }
  //

  // Female test;
  //
  // Male test2;
  //
  // cout << test.get_cycle() << endl;
  // cout << test2.get_respl() << endl;
  //
  // test.day_passed();
  // test2.day_passed();
  //
  // cout << test.get_cycle() << endl;
  // cout << test2.get_respl() << endl;
  //
  // Female test;
  // cout << test.get_cycle() << endl;
  // test.new_born();
  // cout << test.get_cycle() << endl << endl;
  //
  // vector<int> v (5,3);
  //
  // for(int i(0); i< int(v.size()); i++){
  //   cout << v[i] << endl;
  // }


  return 0;
}
