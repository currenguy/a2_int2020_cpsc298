#include <iostream>
using namespace std;

/* This program demonstrates the functionality of four functions: makeLower(),
 * lengthToCentimeters(), output(), and userInput(). When called, userInput()
 * asks the user for a length in feet and inches, then outputs the
 * equivalent length in meters and centimeters.
 */

//Converts a string to lowercase
string makeLower(string s)
{
  for (int i = 0; i < s.size(); ++i)
  {
    s[i] = tolower(s[i]);
  }
  return s;
}

//Converts feet and inches to centimeters
double lengthToCentimeters(double feet, double inches)
{
  //Initialize variables
  const double METERS_PER_FOOT = 0.3048;
  const double CENTIMETERS_PER_METER = 100.0;
  const double INCHES_PER_FOOT = 12.0;
  double lengthInIN = -1.0;
  double lengthInFT = -1.0;
  double lengthInM = -1.0;
  double lengthInCM = -1.0;

  //Conversion calculation to centimeters
  lengthInIN = (feet * INCHES_PER_FOOT) + inches;
  lengthInFT = lengthInIN / INCHES_PER_FOOT;
  lengthInM = lengthInFT * METERS_PER_FOOT;
  lengthInCM = lengthInM * CENTIMETERS_PER_METER;

  return lengthInCM;
}

//Uses centimeter input, then converts it and outputs meters and centimeters
void output(double length)
{
  const int CENTIMETERS_PER_METER = 100;
  double meters = 0;
  double centimeters = length;
  while (centimeters > CENTIMETERS_PER_METER)
  {
    centimeters -= CENTIMETERS_PER_METER;
    meters += 1;
  }
  cout << endl << "-----------------------------------" << endl << endl;
  cout << "Converted Length: ";

  if (meters == 1)
    cout << meters << " Meter, ";
  else
    cout << meters << " Meters, ";

  if (centimeters == 1)
    cout << centimeters << " Centimeter" << endl;
  else
    cout << centimeters << " Centimeters" << endl;
  cout << endl << endl;
}

//Gets feet and inches from the user
void userInput()
{
  string input = "";
  cout << endl << "Type \"s\" to start, type \"quit\" to end: ";
  cin >> input;
  while (makeLower(input) != "quit")
  {
    double userFeet = 0.0;
    double userInches = 0.0;
    cout << "Enter feet and inches separated by a space: ";
    cin >> userFeet;
    cin >> userInches;
    output(lengthToCentimeters(userFeet, userInches));
    cout << endl << "Type \"s\" to start, type \"quit\" to end: ";
    cin >> input;
  }
  cout << endl << "Goodbye!" << endl << endl;
}

//Implementation of functions
int main(int argc, char **argv)
{
  userInput();
  return 0;
}
