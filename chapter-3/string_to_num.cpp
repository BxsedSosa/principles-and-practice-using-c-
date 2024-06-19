#include "iostream"
using namespace std;

int main() {
  string user_input;

  cout << "Please enter in a number spelled out:\n";
  cin >> user_input;

  if (user_input == "zero") {
    cout << "0\n";
  } else if (user_input == "one") {
    cout << "1\n";
  } else if (user_input == "two") {
    cout << "2\n";
  } else if (user_input == "three") {
    cout << "3\n";
  } else if (user_input == "four") {
    cout << "4\n";
  } else {
    cout << "Not a number I know...\n";
  }

  return 0;
}
