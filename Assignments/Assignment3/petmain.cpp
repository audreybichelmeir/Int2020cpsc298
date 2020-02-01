#include "petdemo.h"

int main (int argc, char **argv)
{
//Pet p = new Pet();
Pet p2 = Pet ("rene", 37, "bulldog", 100);
Pet p3 = Pet ("lisa", 81, "cat", 90);

//cout << "Name: " << p.getName() << "Age: " << p.getAge() << "Type: " << p.getType() << "Weight: " << p.getWeight() << endl;
cout << "Name: " << p2.getName() << " Age: " << p2.getAge() << " Type: " << p2.getType() << " Weight: " << p2.getWeight() << endl;
cout << "Name: " << p3.getName() << " Age: " << p3.getAge() << " Type: " << p3.getType() << " Weight: " << p3.getWeight() << endl;

// cout << "address of P: " << p << endl;
// cout << "address of P: " << p2 << endl;
// cout << "address of P: " << p3 << endl;

// delete p;
// delete p2;
// delete p3;

}
