#include "iostream"
using namespace std;

int main() {
  double val1, val2;
  double small, large;
  double sum, diff, product;
  double ratio;

  cout << "Enter your first number:\n";
  cin >> val1;
  cout << "Enter your second number:\n";
  cin >> val2;

  if (val1 > val2) {
    small = val2;
    large = val1;
  } else {
    small = val1;
    large = val2;
  }

  sum = val1 + val2;
  diff = val1 - val2;
  product = val1 * val2;
  ratio = double(val1) / double(val2);

  cout << "Smallest: " << small << "\nLargest: " << large << "\nSum: " << sum
       << "\nDifference: " << diff << "\nProduct: " << product
       << "\nRatio: " << ratio << '\n';

  return 0;
}
