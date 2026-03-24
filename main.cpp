
//?  [Problem Definition]
//*        A software company sells a package that retails for $99. Quantity discounts are given
//*        according to the following table.
//*                Quantity                 Discount Percent
//*                10 - 19                        20%
//*                20 - 49                        30%
//*                50 - 99                        40%
//*                100+                            50%
//*- Write a program that asks for the number of units sold and
//*  computes the total cost of the purchase.
//** Input Validation : Input must be a positive integer.
//**    If we have negative input, just quit the program.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  const double PERC19 = 0.2;
  const double PERC49 = 0.3;
  const double PERC99 = 0.4;
  const double PERC100 = 0.5;
  const double Price = 99.00;
  double totalCost, originalAmount, discountAmount, dRate;
  int numberofSold;

  cout << "Enter the number of units sold\n";
  cin >> numberofSold;

  // TODO

  // Input Validation
  // TODO

  originalAmount = Price * numberofSold;

  // Determine discount rate — check LARGEST range first
  if (numberofSold >= 100) {
    discountAmount = originalAmount * PERC100;
  } else if (numberofSold >= 50) {
    discountAmount = originalAmount * PERC99;
  } else if (numberofSold >= 20) {
    discountAmount = originalAmount * PERC49;
  } else if (numberofSold >= 10) {
    discountAmount = originalAmount * PERC19;
  } else {
    discountAmount = 0;
  }
  // TODO

  // Calculate original amount, discount, and total
  // TODO

  /* To print out your result, use the following statements */
  cout << setprecision(2) << fixed;
  cout << "Original amount is " << originalAmount << endl;
  cout << "Discount amount is " << discountAmount << endl;
  cout << "Total Price is " << totalCost << endl;
}
