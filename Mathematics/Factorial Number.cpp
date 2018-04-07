#include <iostream>

using namespace std;

int main()
{
  int value, factorial=1;
    cout << "\tFactorial Number Algorithm" << endl;
    cout << "\t==========================" << endl;
      cout << "Enter Number: ";
        cin >> value;

        for(int i=value;i>=1;i--){// Ex: value=5 loop=> 5*4*3*2*1 then close
          factorial*=i;
        }
        cout << "Factorial of " << value << " is: " << factorial << endl;

    return 0;
}
