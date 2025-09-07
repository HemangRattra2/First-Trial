#include <iostream>
using namespace std;

int main() {

  int num1, num2, sum;

  cout << "Enter first number: ";
  cin >> num1;

  cout << "Enter second number: ";
  cin >> num2;

  sum = num1 + num2;

  cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

  int a = 1;
  int size = sizeof(a);
  cout << "size of a is " << size << endl;

  float PI = 1.2;
  cout << PI << "\n";

  double d = 2;

  cout << d << "\n";

  bool f = d > 0;
  cout << f << "\n";

  int age;
  cout << "Enter age: ";
  cin >> age;

  cout << "Your Age is: " << age << endl;

  return 0;
      
}
