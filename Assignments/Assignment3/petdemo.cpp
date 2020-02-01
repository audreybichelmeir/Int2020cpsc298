#include "petdemo.h"

Pet:: Pet()
// initalize variables to defautl values
{
p_name = " ";
p_age = 0;
p_type = " ";
p_weight = 0;


}

Pet::Pet(string name, int age, string type, double weight)
// initalize variables to defautl values
{
p_name = name;
p_age = age;
p_type = type;
p_weight = weight;

}

//GETTERS
string Pet::getName()
{
  return p_name;
}

int Pet::getAge()
{
  return p_age;
}

string Pet::getType()
{
return p_type;
}

double Pet::getWeight()
{
  return p_weight;
}

//SETTERS
void Pet::setName(string name)
{
  p_name = name;
}

void Pet::setAge(int age)
{
  p_age = age;
}

void Pet::setType(string type)
{
  p_type = type;
}

void Pet::setWeight(double weight)
{
  p_weight = weight;
}
