#include <iostream>
using namespace std;
//1 commit in my branch
bool isPrime(int n) {
  if(n <= 1) {
    return false;
  }
  //2 commit in my branch
  for(int i = 2; i <= n/2; i++) {
    if(n % i == 0) {
      return false;
    }
  }
  
  return true;
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;

  if(isPrime(n)) {
    cout << n << " is a prime number" << endl;
  }
  else {
    cout << n << " is not a prime number" << endl;
  }
  return 0;
}
