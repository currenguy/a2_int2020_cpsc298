#include <iostream>
using namespace std;

/* This program asks the user for 20 values and stores them in a 2D
 * array. Then, it prints the 2D array with 4 rows and 5 columns.
 */

int main(int argc, char **argv)
{
  //Initialize variables
  unsigned int i = 0;
  unsigned int j = 0;
  const int NUM_COLUMNS = 5;
  const int NUM_ROWS = 4;
  int a[NUM_ROWS][NUM_COLUMNS] = {0};
  int userInput = -1;

  //User inputs for 5 numbers per line on 4 separate lines
  cout << "Type 20 numbers separated by spaces (5 per line, 4 lines): ";
  cout << endl << endl;
  for (i = 0; i < NUM_ROWS; ++i)
  {
    for (j = 0; j < NUM_COLUMNS; ++j)
    {
      cin >> userInput;
      a[i][j] = userInput;
    }
  }

  //Outputs the 2D array with 4 rows and 5 columns
  cout << endl << "---------------" << endl << endl;
  for (i = 0; i < NUM_ROWS; ++i)
  {
    for (j = 0; j < NUM_COLUMNS; ++j)
    {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
}
