#include <iostream>
#include <string>
using namespace std;

class firecapacity
{

public:
  int roomCap(int cap, int attend);
private:
  // N/A


};


int main (int argc, char **argv)
{
int roomCap;
int attend;
firecapacity fc;

cout << "Type maximum room capacity: ";
cin >> roomCap;

cout << "Type the number of people to attend the meeting: ";
cin >> attend;

cout << fc.roomCap(roomCap, attend) << endl;

return 0;

}


int firecapacity::roomCap(int cap, int attend){
  if (attend <= cap)
  {
    int add = 0;
    add = cap - attend;
    cout << "It is legal to hold the meeting and this how many additional people may legally attend: " << add << endl;
  }
  else if (attend > cap)
  {
    int sub = 0;
    sub = attend - cap;
    cout << "The meeting cannot be held as planned due to fire regulations and " <<  sub << " people must be excluded in order to meet the fire regulations" << endl;
  }
  else
  {
    cout << "error" << endl;
  }
}
