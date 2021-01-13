#include <iostream>
using namespace std;
/*
Program that determines whether a meeting room is in violation of fire law regulations regarding
the maximum room capacity.
*/
int main () {
  int maxCapacity;
  int numPeople;
  int additionalPeople;
  int excludedPeople;
  cout << "Enter the maximum room capacity: ";
  cin >> maxCapacity; // reads maximum room capacity
  cout << "Enter the number of people attending the meeting: ";
  cin >> numPeople; // reads number of people attending the meeting
  /*
  If the number of people is less than or equal to the maximum room capacity,
  the program announces that it is legal to hold the meeting and tells how many
  additional people may legally attend.
  */
  if (numPeople <= maxCapacity) {
    cout << "It is legal to hold the meeting." << endl;
    additionalPeople = maxCapacity - numPeople;
    if (additionalPeople == 1) {
      cout << additionalPeople << " additional person can legally attend." << endl;
    }
    else {
      cout << additionalPeople << " additional people can legally attend." << endl;
    }
  }
  /*
  If the number of people exceeds the maximum room capacity, the program announces that
  the meeting cannot be held as planned due to fire regulations and tells how many people
  must be excluded in order to meet the fire regulations.
  */
  else {
    cout << "The meeting cannot be held due to fire regulations." << endl;
    excludedPeople = numPeople - maxCapacity;
    if (excludedPeople == 1) {
      cout << excludedPeople << " person must be excluded in order to meet the fire regulations." << endl;
    }
    else {
      cout << excludedPeople << " people must be excluded in order to meet the fire regulations." << endl;
    }
  }
  return 0;
}
