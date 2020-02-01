#include <iostream>
#include <string>
using namespace std;

class sales
{
public:
  float addTax(float taxRate, float cost);
private:

};

int main(int argc, char **argv)
{
  sales s;
  float userTax = 0;
  float userCost = 0;

  cout << "Enter the amount of sales tax expressed as a percent: ";
  cin >> userTax;
  cout << "Enter the cost of item: ";
  cin >> userCost;

  cout << s.addTax(userTax, userCost) << endl;
  return 0;



}

float sales :: addTax(float taxRate, float cost)
{
  float fTaxRate = taxRate / 100.0;
  float finalCal = cost * fTaxRate;
  float finalCost = cost + finalCal;
  cout << "The function returns the value of cost so that it includes sales tax: ";
  return finalCost;

}
