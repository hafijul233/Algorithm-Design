#include <iostream>

using namespace std;

  unsigned long long fibo[90];

void series(){
  fibo[0] = 0,fibo[1] = 1;
  long long limit;
    cout << "Enter Series Limit: ";
      cin >> limit;

  if(limit == 1){
    cout << fibo[1] << endl;
  }

  else{
    for(long long i=2;i<=limit; i++){
      fibo[i] = fibo[i-1]+fibo[i-2];
      cout << fibo[i] << " " ;
    }
    cout << endl;
  }

  cout << endl << endl;
}

void number(){
  fibo[0] = 0,fibo[1] = 1;
  long long limit;
    cout << "Enter Nth position: ";
      cin >> limit;

  if(limit == 1){
    cout << fibo[1] << endl;
  }

  else{
    for(long long i=2; i<=limit; i++){
      fibo[i] = fibo[i-1]+fibo[i-2];
    }
    cout << limit << "th number of Fibonacci Series is: " << fibo[limit] << endl;
  }

  cout << endl << endl;
}

int main()
{
  bool run = true;
  int choice;

    cout << "\tFibonacci Number Algorithm" << endl;
    cout << "\t==========================" << endl;
      while(run){
        cout << "\t1 -> Fibonacci Series" << endl;
        cout << "\t2 -> Fibonacci Number" << endl;
        cout << "\t3 -> Quit" << endl;
        cout << "\t---------------------" << endl;
        cout << "\tEnter Choice: ";
          cin >> choice;
        switch(choice){
          case 1: series();
                  break;
          case 2: number();
                  break;
          case 3: return 0;

         default: cout << "\t\tWrong Input" << endl;
        }
      }
    return 0;
}
