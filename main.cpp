#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
  double num1, num2;
  char operation;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Which operation do you wish to use? (*, /, +, -, ^, V) ";
  cin >> operation;

  switch (operation) {
  case '^':
  cout << num1 * num1 << endl;;
  string again;
    cout << "Would you like to go again? Y/N" << endl;
    cin >> again;
    for (char& c : again) {
        c = toupper(c);
        }
    if (again == "Y") {
        main();
    } else return 0;
  }

  switch (operation) {
  case 'V':
  double result = sqrt(num1);
  cout << result << endl;
  string again;
    cout << "Would you like to go again? Y/N" << endl;
    cin >> again;
    for (char& c : again) {
        c = toupper(c);
        }
    if (again == "Y") {
        main();
    } else return 0;
  }

  cout << "Enter your second number: ";
  cin >> num2;
  double result;
  switch (operation) {
    case '+':
      result = num1 + num2;
      cout << num1 << " + " << num2 << " = " << result << endl;
      break;
    case '-':
      result = num1 - num2;
      cout << num1 << " - " << num2 << " = " << result << endl;
      break;
    case '*':
      result = num1 * num2;
      cout << num1 << " * " << num2 << " = " << result << endl;
      break;
    case '/':
      if (num2 == 0) {
        cout << "Error: Division by zero" << endl;
      } else {
        result = num1 / num2;
        cout << num1 << " / " << num2 << " = " << result << endl;
      }
      break;
    default:
      cout << "Invalid operator" << endl;
  }

    string again;
    cout << "Would you like to go again? Y/N" << endl;
    cin >> again;

    for (char& c : again) {
        c = toupper(c);
        }
    if (again == "Y") {
        main();
    } else return 0;
}
