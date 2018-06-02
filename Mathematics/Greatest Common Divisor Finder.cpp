#include <iostream>

using namespace std;

int main()
{
  int first, second, loop_range, gcd;
  cout << "\tGreatest Common Divisor Finding Algorithm" << endl;
  cout << "\t=========================================" << endl;
    cout << "Enter First Number: ";
      cin >> first;
    cout << "Enter Second Number: ";
      cin >> second;

      if(first<second)loop_range = first;

      else loop_range = second;

        for(int i=2;i<=loop_range;i++){

          if((first%i == 0) && (second%i==0)){

          }
        }

        cout << "Factorial of " << value << " is: " << factorial << endl;
  return 0;
}
