#include <iostream>
#include <string>
using namespace std;

class inflation
{
public:
  double inflationCost(double cost, double year, double inflation);

private:
  //N/a
};

int main (int argc, char ** argv)
{

double userCost = 0;
double userYear = 0;
double userInflation = 0;
inflation inf;

cout << "The cost of the item: ";
cin >> userCost;

cout << "The number of years from now that the item will be purchased: ";
cin >> userYear;

cout << "The rate of inflation: " ;
cin >> userInflation;

cout << inf.inflationCost(userCost, userYear, userInflation) << endl;

return 0;
}

double inflation::inflationCost(double cost, double year, double inflation)
{
  double inf, infCost = 0;
  infCost = cost;

  inf = inflation / 100.00;

//CALCULATING IS USED TO ESTIMATE THE PRICE ADJUSTED FOR INFLATION
  for(int i = 0; i < year; ++i)
  {
   infCost = infCost + (infCost * inf);
  }

  cout << "The cost of the item after " << year << " years will be $ " << infCost << endl;


}
