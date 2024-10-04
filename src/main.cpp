//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        10/8/2024
// Class:       CS150-xx (Replace xx with your section number)
// Assignment:  Debugging Lab
// Purpose:     Debug the following program to understand how the debugger works
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <fstream>

using namespace std;

int main () {
  const string FILE_NAME = "numbers.txt";
  double number, sum = 0.0, average = 0.0;
  int count = 0;
  ifstream inFile;

  inFile.open ("FILE_NAME");

  inFile >> number;
  while (number != -99.0) {
    count++;
    sum += number;
    inFile >> number;
  }

  if (count != 0) {
    average /= static_cast<double> (count);
  }

  cout << "Sum = " << sum << endl;
  cout << "Average = " << average << endl;

  return EXIT_SUCCESS;
}