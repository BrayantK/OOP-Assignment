#include <iostream>

using namespace std;

const int ARRAY_SIZE = 15; // Define the array size

int main() {
  // Create an array to store user inputs
  int userArray[ARRAY_SIZE];

  // Store user inputs in the array
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    cout << "Enter integer value " << (i + 1) << ": ";
    cin >> userArray[i];
  }

  // a) Print array values
  cout << "\nArray values:" << endl;
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    cout << userArray[i] << " ";
  }
  cout << endl;

  // b) Check for user-entered number
  int searchNumber;
  cout << "\nEnter a number to search for: ";
  cin >> searchNumber;

  bool found = false;
  int foundIndex;
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    if (userArray[i] == searchNumber) {
      found = true;
      foundIndex = i;
      break;
    }
  }

  if (found) {
    cout << "The number " << searchNumber << " found at index " << foundIndex << endl;
  } else {
    cout << "Number " << searchNumber << " not found in this array" << endl;
  }

  // c) Create and copy array in reverse order
  int reversedArray[ARRAY_SIZE];
  for (int i = 0, j = ARRAY_SIZE - 1; i < ARRAY_SIZE; ++i, --j) {
    reversedArray[i] = userArray[j];
  }

  // Print reversed array values
  cout << "\nReversed array values:" << endl;
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    cout << reversedArray[i] << " ";
  }
  cout << endl;

  // d) Calculate sum and product
  int sum = 0;
  int product = 1;
  for (int i = 0; i < ARRAY_SIZE; ++i) {
    sum += userArray[i];
    product *= userArray[i];
  }

  cout << "\nSum of all elements: " << sum << endl;
  cout << "Product of all elements: " << product << endl;

  return 0;
}
