#include <iostream>
using namespace std;

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
  const double METERS_PER_FOOT = 0.3048;
  const double CENTIMETERS_PER_METER = 100.0;
  const double INCHES_PER_FOOT = 12.0;
  double lengthInIN = -1.0;
  double lengthInFT = -1.0;
  double lengthInM = -1.0;
  double lengthInCM = -1.0;

  lengthInIN = (feet * INCHES_PER_FOOT) + inches;
  lengthInFT = lengthInIN / INCHES_PER_FOOT;
  lengthInM = lengthInFT * METERS_PER_FOOT;
  lengthInCM = lengthInM * CENTIMETERS_PER_METER;

  return lengthInCM;
}

//Uses centimeter value to output meters and centimeters
void output(double length)
{
  const double CENTIMETERS_PER_METER = 100.0;
  double meters = length % CENTIMETERS_PER_METER;

  cout << "Converted Length: ";
  cout << meters << " Meters, ";
}

void userInput()
{
  string input = "";
  cout << "Type \"s\" to start, type \"quit\" to end: ";
  cin >> input;
  while (makeLower(input) != "quit")
  {
    double userFeet = 0.0;
    double userInches = 0.0;
    cout << "Enter feet and inches separated by a space: ";
    cin >> userFeet;
    cin >> userInches;
    cout << lengthToCentimeters(userFeet, userInches);
    output(lengthToCentimeters(userFeet, userInches));
    cout << "Type \"s\" to start, type \"quit\" to end: ";
    cin >> input;
  }
}

int main(int argc, char **argv)
{
  userInput();
}
