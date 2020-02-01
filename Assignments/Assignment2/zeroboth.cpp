#include <iostream>
#include <string>
using namespace std;

class zero
{
public:
  void zeroBoth(int& c, int& d);
private:
  // N/A
};

void zero::zeroBoth(int& c, int& d)
{
  c = 0;
  d = 0;
}

int main(int argc, char **argv)
{
  int a = 5;
  int b = 6;

  zero z;

  z.zeroBoth(a,b);

  cout << a << endl;
  cout << b << endl;

  return 0;
}
//https://stackoverflow.com/questions/11736306/when-pass-a-variable-to-a-function-why-the-function-only-gets-a-duplicate-of-th
