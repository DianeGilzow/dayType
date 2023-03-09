#ifndef H_dayType
#define H_dayType

#include <iostream>

using namespace std;

/* the dayType class will keep track of a day in a week.
   this class can:
    set the current day.
    return the current day.
    return the next day.
    return the previous day.
    add a certain number of days to the current day and return that day. */
class dayType {
public:
  // constructors
  dayType();
  dayType(string y); // precondition: y must be Sunday, Monday, Tuesday,
                     // Wednesday, Thursday, Friday, or Saturday

  // getters and setters
  void setDay(string x);
  string getDay() const;

  void print() const; // post condition: displays the value of day
  string nextDay();   // post condition: returns the next day
  string prevDay();   // post condition: returns the previous day
  void addDay(int n); // precondition: n must be positive
                      // post condition: value of day will change
private:
  string day;
  static string days[7];
};

#endif