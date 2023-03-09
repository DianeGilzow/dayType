#include "dayType.h"
#include <iostream>

using namespace std;

// array to hold the days of the week
string dayType::days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
                           "Thursday", "Friday", "Saturday"};

dayType::dayType() {
}

dayType::dayType(string y) { 
  setDay(y); 
}

void dayType::setDay(string x) { 
  day = x; 
}

string dayType::getDay() const { 
  return day; 
}

// function to find the next day
string dayType::nextDay() {
  int i;
  for (i = 0; i < 7; i++) { // get index for current day
    if (day == days[i]) {
      break;
    }
  }
  return days[(i + 1) % 7];
}

// function to find the previous day
string dayType::prevDay() {
  int i;
  for (i = 0; i < 7; i++) { // get index for current day
    if (day == days[i]) {
      break;
    }
  }
  i -= 1;
  if (i < 0) {
    i = 6;
  }
  return days[i];
}

// function to add a certain number of days to the current day
void dayType::addDay(int n) {
  int i;
  for (i = 0; i < 7; i++) { // get index for current day
    if (day == days[i]) {
      break;
    }
  } day = days[(i + n) % 7];
}

void dayType::print() const {
  cout << "Current day: " << day << endl;
}
