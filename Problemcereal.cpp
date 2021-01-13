#include <iostream>
using namespace std;
/*
Program that reads the weight of a package of breakfast cereal in ounces and output the weight in metric tons as well as the
number of boxes needed to yield one metric ton of cereal.
*/
 int main () {
   const float METRIC_TON = 35273.92; // metric ton in ounces
   int cerealWeightOunces;
   float cerealWeightTons;
   float numBoxes;
   cout << "Enter the weight of the cereal package in ounces: ";
   cin >> cerealWeightOunces; // takes in the weight of the cereal box in ounces
   cerealWeightTons = cerealWeightOunces / METRIC_TON; // calculates the weight of the cereal box in tons
   cout << "The weight in metric tons of that cereral package is " << cerealWeightTons << "." << endl; // outputs weight in tons
   numBoxes = METRIC_TON / cerealWeightOunces; // calculates the number of boxes needed to reach one ton
   cout << "The number of boxes needed to yield one metric ton of cereal is " << numBoxes << "." << endl; // outputs number of boxes
   return 0;
 }
