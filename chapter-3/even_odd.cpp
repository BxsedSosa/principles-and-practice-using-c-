#include "iostream"
using namespace std;

int main() {
  int user_input;

  cout << "Please enter a number:\n";
  cin >> user_input;

  if (user_input % 2 == 0) {
    cout << "The value " << user_input << " is an even number.\n";
  } else {
    cout << "The value " << user_input << " is an odd number.\n";
  }

  return 0;
}
