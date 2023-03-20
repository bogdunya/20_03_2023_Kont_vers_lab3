#include <iostream>
using namespace std;

int main() {
  // first main commit
  double num1, num2;
  char op;
  cout << "Enter first number, operator, second number: ";
  cin >> num1 >> op >> num2;
  //first commit to branch
  switch(op) {
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      break;
    case '*':
    //second main commit
      cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
      break;
    case '/':
      if(num2 == 0) {
        cout << "Error: division by zero" << endl;
      }
      else {
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
      }
      break;
    default:
      cout << "Error: invalid operator" << endl;
      break;
  }
  //second commit to branch
  return 0;
}
