#include <iostream>
using namespace std;

/* This program asks the user for up to 10 positive integers
 * and stores them in an array. Then, it prints the elements
 * of the array.
 */

int main(int argc, char **argv)
{
  //Initialize variables
  const int ARRAY_SIZE = 10;
  int positiveInts[ARRAY_SIZE] = {0};
  int userInput = -1;
  unsigned int i = 0;

  //Asks user for 10 positive integers
  for (i = 0; i < ARRAY_SIZE; ++i)
  {
    //Breaks the loop if a non-integer input is entered
    if (!cin)
    {
      break;
    }
    else
    {
      cout << endl << "Enter positive number (enter 'q' to quit): ";
      cin >> userInput;
      while (userInput < 0)
      {
        cout << "Number not positive. Try again: ";
        cin >> userInput;
      }
      positiveInts[i] = userInput;
    }
  }

  //Outputs array to console
  cout << endl << "--------------------------" << endl;
  cout << endl << "YOUR ARRAY:" << endl;
  for (i = 0; i < ARRAY_SIZE; ++i)
  {
    cout << "Index " << i << ": " << positiveInts[i] << endl;
  }
  cout << endl;

  return 0;
}
