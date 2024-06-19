#include "iostream"
using namespace std;

int main() {
  string first_name;
  string friend_name;
  char gender = 0;
  int age = 0;
  cout << "Enter your first name\n";
  cin >> first_name;
  cout << "Enter your friends name\n";
  cin >> friend_name;
  cout << "What gender is your friend?\n";
  cin >> gender;
  cout << "Dear " << first_name << ",\n";
  cout << "\n\tHow are you? I am fine. I miss you. Have you seen "
       << friend_name << " lately?\n";

  if (gender == 'm') {
    cout << "If you see " << friend_name << " please ask him to call me.\n";
  } else if (gender == 'f') {
    cout << "If you see " << friend_name << " please ask her to call me.\n";
  }

  cout << "Whats your age?\n";
  cin >> age;

  if (age < 0 || age > 110) {
    cout << "you're kidding!\n";
  } else if (age < 12) {
    cout << "Next year you will be " << ++age << '\n';
  } else if (age == 17) {
    cout << "Next year you will be able to vote.\n";
  } else if (age > 70) {
    cout << "I hope you are enjoying retirement.\n";
  } else {
    cout << "I hear you just had a birthday and you are " << age
         << " years old.\n";
  }

  cout << "Yours sincerely,\n\n" << first_name << '\n';

  return 0;
}
