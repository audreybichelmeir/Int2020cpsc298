#include <iostream>
#include <string>
using namespace std;

class array
{

public:
  int Array_Display(int arr[10]);

private:
  // N/A

};

int main (int argc, char **argv)
{
  int user = 0;
  int numberArray[10];
  int i = 0;
  array a_Arr;
  bool isGood = false;

  while(!isGood) // so it doesn't break when the user enters a neg number
  {
    while (i < 10)
    {
      cout << "Enter a nonnegative number: ";
      cin >> user;
      if (user < 0)
      // to take perccaution if the user inputs a negative number
      {
        cout << "error, NONNEGATIVE NUMBER/POSITIVE please!" << endl;
        // they dont deserve a second chance to redeem themselves
      }else{
        numberArray[i] = user;
        ++i;
        isGood = true;
      }
  } // end of i < 10 loop

} // end of isGood while lopp
  cout << "printing array" << endl;
  for (int i = 0; i < 10; ++i)
  {
    cout << numberArray[i] << endl;
  }

  return 0;
}
