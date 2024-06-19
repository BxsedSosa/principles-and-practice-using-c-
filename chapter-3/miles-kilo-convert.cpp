#include "iostream"
using namespace std;

int main() {
  string answer;
  int distance;

  cout << "Do you want to convert to 'miles' or 'kilometers'\n";
  cin >> answer;
  cout << "How are of a distance do you want to convert?\n";
  cin >> distance;

  if (answer == "miles") {
    int miles = distance * 0.6213712;
    cout << "Kilometers: " << distance << " -> Miles: " << miles << '\n';
  } else if (answer == "kilometers") {
    int kilometers = distance * 1.609344;
    cout << "Miles: " << distance << " -> Kilometers: " << kilometers << '\n';
  } else {
    cout << "You didn't input the correct inputs!\n";
  }

  return 0;
}
