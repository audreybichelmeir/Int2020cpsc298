#include <iostream>
using namespace std;

//length in feet and inches and output the equivalent length in meters and centimeters

class conversion{
public:
  void userinput(string& user, double feet, double inches);
  void cConversion(double& userFt, double& userIn);
  void output(double& meters, double& centimeters);
  string users = " ";
  double userFt = 0;  // User defined feet
  double userIn = 0;  // User defined inches
  double meter = 0; // Conversion
  double centimeter = 0; // Conversion

private:
  //N/A

};

void conversion::cConversion(double& userFt, double& userIn)
{
  double meters;
  double centimeters;

  userFt = userFt + (userIn / 12);
  meters = userFt / 3.281;
  centimeters = meters * 100;

  cout << "Meters: " << meters << ", " << "Centimeters: " << centimeters << ". " << endl;
  meter = meters;
  centimeter = centimeters;
}

void conversion::userinput(string& user, double feet, double inches)
{
  do{
    // Prompt user for feet/inches
    cout << "Enter feet: ";
    cin >> feet;

    cout << "Enter inches: ";
    cin >> inches;

    // Output the conversion result
    cout << "Centimeters: ";
    cConversion(feet, inches);
    // to quit
    cout << "To exit calculation type 'exit' " << endl;
    // user = user.tolower();
    cin >> users;
  } while(users != "exit");
}

void conversion::output(double& meters, double& centimeters)
{
cout << "Meters: " << meters << endl;
cout << "Centimeters: " << centimeters << endl;
}

int main (int argc, char **argv)
{
  string users = " ";
  double userFt = 0;  // User defined feet
  double userIn = 0;  // User defined inches
  double meter = 0; // Conversion
  double centimeter = 0; // Conversion

  conversion c;
  c.userinput(users, userFt, userIn);
  c.output(meter, centimeter);

  return 0;
}
