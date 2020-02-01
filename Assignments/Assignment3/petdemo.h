#include <iostream>
#include <string>
using namespace std;

class Pet
{
public:
  Pet(); // constructor
  Pet(string name, int age, string type, double weight);

  string getName();
  int getAge();
  string getType();
  double getWeight();

  void setName(string name);
  void setAge(int age);
  void setType(string type);
  void setWeight(double weight);

private:
  //attributes of the object
  string p_name;
  unsigned int p_age;
  string p_type;
  /*unsigned*/ double p_weight;
};
