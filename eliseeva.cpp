#include <iostream>
using namespace std;
//first comm main
int main() {
  int n, flag = 0;
  cout << "Enter a positive integer: ";
  cin >> n;
  //first comm eliseeva
  for(int i = 2; i <= n/2; i++) {
    if(n % i == 0) {
      flag = 1;
      break;
    }
  }
  //second comm main
  if(flag == 0) {
    cout << n << " is a prime number" << endl;
  }
  else {
    cout << n << " is not a prime number" << endl;
  }
  return 0; //second comm eliseeva
}
