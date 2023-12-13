#include <iostream>

using namespace std;


// Function to calculate the sum of even-valued Fibonacci terms
long long fibonacci_sum_even(long long limit) {
  long long a = 1, b = 2, sum_even = 0;
  while (b < limit) {
    if (b % 2 == 0) {
      sum_even += b;
    }
    a = b;
    b = a + b;
  }
  return sum_even;
}

int main() {
  // Set the limit
  const long long limit = 4000000;

  // Calculate the sum of even-valued terms
  long long sum_even = fibonacci_sum_even(limit);

  // Print the result
  cout << "The sum of all even-valued terms in the Fibonacci sequence below " << limit << " is: " << sum_even << endl;

  return 0;
}
