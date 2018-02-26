#include <iostream>
#include <time.h>

using namespace std;

int QuickSort(int elements[], int siz){

  int counter = 0;


    for(int i=0; i<siz; i++){
      cout << elements[i] << " ";
    }

    cout << endl;

  return counter;
}

int main()
{

  clock_t start_t,end_t;// processor time variable macro
  double diff_t;// difference time calculation
  int siz, total_moves;

  cout << "\tArray Sorting Algorithm" << endl;
  cout << "\t=======================" << endl;
  cout << "\t\tQuick Sorting" << endl;
  cout << "\t\t--------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<"numbers: " << endl;
    int elements[siz];

      for(int i = 0; i<siz; i++){
        cin >> elements[i];
      }

      start_t = clock();

        total_moves = QuickSort(elements, siz);

      end_t = clock();

    cout << "Total [ " << total_moves <<" ] Moves used for " << siz << "Numbers." << endl;
    	// Tells how much moves taken to sort
    cout << "Start Time: " << start_t << endl;
    cout << "End Time: " << end_t << endl;

      diff_t = double(end_t - start_t) / CLOCKS_PER_SEC; //calculate the time difference CLOCKS_PER_SEC = 1000; ref time.h line 29

    cout << "Total Process Time Consumed:" << diff_t << " Seconds .(Including Display loop)" << endl;

    return 0;
}
