#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int SieveOfEratosthenes(int n)
{
  // consume less memory single bit
    bool prime[n+1];
      //initialize all entries it as true = 0
      memset(prime, true, sizeof(prime));

    for (int i=2; i*i<=n; i++){
      // If prime[i] is not changed, then it is a prime
      if (prime[i] == true){
        // Update all multiples of i
        for (int j=i*2; j<=n; j += i){
          prime[j] = false;
        }
      }
    }

     // Print all prime numbers from 2 because 0 & 1 are not considered as prime number

    int counter = 0;// calculate total number generated

    for (int i=2; i<=n; i++){
      if (prime[i] == true){
        cout << i << " ";// hide this line to check Accurate Process time
        counter++;
      }
    }

    cout << endl;

    return counter;
}

int main()
{
  clock_t start_t,end_t;// processor time variable macro
  double diff_t;// difference time calculation
  int limit,total;

  cout << "\tPrime Number Finder / Generator Algorithm" << endl;
  cout << "\t=========================================" << endl;
  cout << "\t\tSieve of Eratosthenes" << endl;
  cout << "\t\t---------------------" << endl;
    cout << "Enter Last Limit Range: " ;
      cin >> limit;

      start_t = clock();

        total = SieveOfEratosthenes(limit);

      end_t = clock();

      cout << "Total [ " << total << " ] Prime numbers from 2 to " << limit << endl;

      cout << "Start Time: " << start_t << endl;
      cout << "End Time: " << end_t << endl;
		//calculate the time difference CLOCKS_PER_SEC = 1000; ref time.h line 29
        diff_t = double(end_t - start_t) / CLOCKS_PER_SEC;

    cout << "Total Process Time Consumed:" << diff_t << " Seconds .(Including Display loop)" << endl;
  return 0;
}
