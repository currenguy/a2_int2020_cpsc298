#include <iostream>
using namespace std;

/* This program demonstrates a function zeroBoth() that
 * sets two integer parameters to 0.
 */

//Uses pass by reference to zero both int arguments
void zeroBoth(int& num1, int& num2)
{
  num1 = 0;
  num2 = 0;
}

//Implementation of zeroBoth()
int main(int argc, char **argv)
{
  //Initializes two test variables
  int x = 1;
  int y = 2;

  //Outputs variable values before zeroBoth()
  cout << endl << "BEFORE zeroBoth():" << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;

  //Calling function zeroBoth()
  zeroBoth(x, y);

  //Outputs variables after zeroBoth()
  cout << endl << "AFTER zeroBoth():" << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl << endl;

  return 0;
}
