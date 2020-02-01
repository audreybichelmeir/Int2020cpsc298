#include <iostream>
#include <string>
using namespace std;

class employeepay
{
public:

  float employeePay(float hour);

private:
  //N/A
};

int main (int argc, char **argv)
{

  float hr = 0;
  employeepay ep;

cout << "Type number of hours: ";
cin >> hr;

cout << ep.employeePay(hr) << endl;

return 0;

}

  float employeepay::employeePay(float hour){
  float const PAID = 16.00;
  float const OVERTIME = 24.00; // 16 * 1.5;
  float const SS = 0.06;
  float const FEDERAL = 0.14;
  float const STATE = 0.05;
  float const MED = 10.00;

  float payReg, overtimeHour, grossPay, totalTax, netPay, ssTax, fedTax, stateTax = 0;

  if (hour > 40)
  {
    //THIS IF STATEMENT IS USED IF THE USER WORKS OVER TIME
    overtimeHour = hour - 40;
    grossPay = (overtimeHour * OVERTIME) + (40 * PAID);
    ssTax = grossPay * SS;
    fedTax = grossPay * FEDERAL;
    stateTax = grossPay * STATE;
    totalTax = ssTax + fedTax + stateTax + MED;
    netPay = grossPay - totalTax;
  }
  else
  {
    payReg = hour * PAID;
    grossPay = payReg;
    ssTax = grossPay * SS;
    fedTax = grossPay * FEDERAL;
    stateTax = grossPay * STATE;
    totalTax = ssTax + fedTax + stateTax + MED;
    netPay = grossPay - totalTax;
  }

  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Social Security Tax: $" << ssTax << endl;
  cout << "Federal Income Tax: $" << fedTax << endl;
  cout << "State Income Tax: $" << stateTax << endl;
  cout << "Medical Insurance: $" << MED << endl;
  cout << "Net take-home pay for the week: $" << netPay << endl;

}
