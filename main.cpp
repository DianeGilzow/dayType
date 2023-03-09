#include "dayType.h"
#include <iostream>

using namespace std;

int main() {
  dayType day;              // object 1
  dayType day2("Monday");   // object 2
  
  day.setDay("Sunday");
  day.print();
  cout << "From Default Constructor: " << day.getDay() << endl
       << "Next Day: " << day.nextDay() << endl
       << "Previous Day: " << day.prevDay() << endl << endl;

  day2.print();
  cout << "From constructor with parameters: " << day2.getDay() << endl
       << "Next Day: " << day2.nextDay() << endl 
       << "Previous Day: " << day2.prevDay() << endl;

  // add days to the current day
  day2.addDay(3);
  cout << "After adding 3 days: " << day2.getDay() << endl;
  
  day2.addDay(30);
  cout << "After adding 30 days: " << day2.getDay() << endl;
  
  day2.addDay(365);
  cout << "After adding 365 days: " << day2.getDay() << endl;

  return 0;
}