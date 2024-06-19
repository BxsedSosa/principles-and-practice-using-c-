#include "iostream"
using namespace std;

int main() {
  int val1, val2, val3;

  cout << "Please enter first number: \n";
  cin >> val1;
  cout << "Please enter second number: \n";
  cin >> val2;
  cout << "Please enter third number: \n";
  cin >> val3;

  if (val1 < val2 && val1 < val3) {
    if (val2 < val3) {
      cout << val1 << ',' << val2 << ',' << val3 << '\n';
    }
  } else if (val2 < val1 && val2 < val3) {
    if (val1 < val3) {
      cout << val2 << ',' << val1 << ',' << val3 << '\n';
    }
  } else if (val3 < val1 && val3 < val2) {
    if (val1 < val2) {
      cout << val3 << ',' << val1 << ',' << val2 << '\n';
    }
  }

  return 0;
}
