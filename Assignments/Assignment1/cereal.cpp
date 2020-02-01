#include <iostream>
using namespace std;

class cereal
{
public:
  float cerealTon(float input);
private:

};

int main (int argc, char **argv)
{
  // DECLARING VARIABLES
  const float METRIC_TON = 35273.92;
  float ounce = 0;
  cereal c;

  cout << "Enter weight of a package of breakfast cereal in ounces: ";
  cin >> ounce;

  cout <<c.cerealTon(ounce) << endl;

return 0;
}

float cereal::cerealTon(float input)
{
  const float METRIC_TON = 35273.92;
  float weight_mt = 0;
  float boxes = 0;
  float aounce = input;

  weight_mt = aounce / METRIC_TON;
  cout << "The weight in metric tons: " << weight_mt << endl;

  boxes = METRIC_TON / aounce;
  cout << "The number of boxes needed to yield one metric ton of cereal is: " << boxes << endl;

}
