#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

/* This program demonstrates a function addTax() that
 * returns the cost of an item after tax.
 */

//Function returns a cost after tax (parameters for tax percentage and cost)
float addTax(float taxRate, float cost)
{
  float percentTax = taxRate / 100.0;
  return cost + (cost * percentTax);
}

//Implementation
int main(int argc, char **argv)
{
  //Initialize variables
  float itemCost = 10.0;
  float tax = 2.0;
  float taxedItemCost = addTax(tax, itemCost);

  //Output cost before tax

  cout << setprecision(2) << fixed << endl;
  cout << "Cost before tax: $" << itemCost << endl;
  cout << "Cost after tax: $ " << taxedItemCost << endl;
  cout << endl;

  return 0;
}
