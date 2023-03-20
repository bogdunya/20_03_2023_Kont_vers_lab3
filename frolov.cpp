#include <iostream>
using namespace std;

int main() {
  double num1, num2, result; //Комментарий 1
  char op;
  cout << "Enter first number, operator, second number: ";
  cin >> num1 >> op >> num2;

  switch(op) { //Комментарий 2
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      if(num2 == 0) {
        cout << "Error: division by zero" << endl;
        return 1;
      }
      result = num1 / num2;
      break;
    default:
      cout << "Error: invalid operator" << endl; //Это ошибка invalid operator
      return 1;
  }
  
  cout << num1 << " " << op << " " << num2 << " = " << result << endl;
  return 0;//Возвращаемое значение: return 0
}
