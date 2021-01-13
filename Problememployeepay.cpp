#include <iostream>
using namespace std;
/*
Program that reads in the number of hours worked in a week as input and
that will then output the worker’s gross pay, each withholding amount, and
the net take-home pay for the week.
*/
int main () {
  float payRate = 16.00; // employee paid $16/hour for regular hours
  float overtimeRate = payRate * 1.5; // overtime rate is one and a half times the regular rate
  int numHours;
  float grossPay;
  int normalHours = 40;
  int overtimeHours;
  float socialSecurityTax;
  float federalIncomeTax;
  float stateIncomeTax;
  int medicalInsurance = 10; // amount withheld for medical insurance
  float netPay;
  cout << "Enter the hours you worked in a week: ";
  cin >> numHours; // reads number of hours worked
  // if-else statement calculates gross pay
  if (numHours > 40) {
    overtimeHours = numHours - normalHours;
    grossPay = (payRate * normalHours) + (overtimeRate * overtimeHours);
  }
  else {
    grossPay = payRate * numHours;
  }
  cout << "Your gross pay is: $" << grossPay << "." << endl; // prints gross pay amount 
  cout << "Withholding amounts:" << endl;
  socialSecurityTax = grossPay * 0.06; // calculates amount withheld for social security tax
  cout << "6% or $" << socialSecurityTax << " for social security tax." << endl; // prints social security tax amount
  federalIncomeTax = grossPay * 0.14; // calculates amount withheld for federal income tax
  cout << "14% or $" << federalIncomeTax << " for federal income tax." << endl; // prints federal income tax amount
  stateIncomeTax = grossPay * 0.05; // calculates amount withheld for state income tax
  cout << "5% or $" << stateIncomeTax << " for state income tax." << endl; // prints state income tax amount
  cout << "$10 per week for medical insurance." << endl; // prints medical insurance amount
  netPay = grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - medicalInsurance; // calculates net pay
  cout << "The net take-home pay for the week is $" << netPay << "." << endl; // prints net pay amount
  return 0;
}
