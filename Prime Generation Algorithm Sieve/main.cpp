#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

int SieveOfEratosthenes(long long n)
{
  // consume less memory single bit
    bool prime[n+1];
      //initialize all entries it as true = 0
      memset(prime, true, sizeof(prime));
    for (long long i=2; i*i<=n; i++){
      // If prime[i] is not changed, then it is a prime
      if (prime[i] == true){
        // Update all multiples of p
        for (long long j=i*2; j<=n; j += i){
          prime[j] = false;
        }
      }
    }

     // Print all prime numbers from 2 because 0 & 1 are not considered as prime number

    long long counter = 0;// calculate total number generated

    for (long long i=2; i<=n; i++){
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
  long long limit,total;

  cout << "\tPrime Number Finder / Generator Algorithm" << endl;
  cout << "\t=========================================" << endl;
  cout << "\t\tSieve of Eratosthenes" << endl;
  cout << "\t\t---------------------" << endl;

    cout << "Enter Last Limit Range: " ;

      cin >> limit;

      start_t = clock();

        total = SieveOfEratosthenes(limit);

      end_t = clock();

      cout << "Total [ " << total <<" ] Prime numbers from 2 to " << limit << endl;

      cout << "Start Time: " << start_t << endl;
      cout << "End Time: " << end_t << endl;

        diff_t = double(end_t - start_t) / CLOCKS_PER_SEC; //calculate the time difference CLOCKS_PER_SEC = 1000; ref time.h line 29

    cout << "Total Process Time Consumed:" << diff_t << " Seconds .(Including Display loop)" << endl;
  return 0;
}
