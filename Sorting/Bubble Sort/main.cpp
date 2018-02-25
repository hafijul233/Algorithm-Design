#include <iostream>
#include <time.h>

using namespace std;

int BubbleSort(long long elements[], long long siz){
  long long counter = 0, temp;

  // loop will start from second Index and compare with previous one
    for(long long i=1; i<siz; i++){
      // second loop will find the position of number
      for(long long j =i; j<=siz; j++){
        // Ex: elements[1]<elements[0] then swap there21 values
        if(elements[j] < elements[j-1]){
          temp = elements[j];
          elements[j] = elements[j-1];
          elements[j-1] = temp;
          counter++;// this will count all moves taken
        }
      }
    }
    for(long long i=0; i<siz; i++){
      cout << elements[i] << " ";
    }
    cout << endl;
  return counter;
}

int main()
{
  clock_t start_t,end_t;// processor time variable macro
  double diff_t;// difference time calculation

  long long siz, total_moves;

  cout << "\tArray Sorting Algorithm" << endl;
  cout << "\t=======================" << endl;
  cout << "\t\tBubble Sorting" << endl;
  cout << "\t\t--------------" << endl;

    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<"numbers: " << endl;

    long long elements[siz];
      for(long long i = 0; i<siz; i++){
        cin >> elements[i];
      }

      start_t = clock();
        total_moves = BubbleSort(elements, siz);
      end_t = clock();

      end_t = clock();

    cout << "Total [ " << total_moves <<" ] Moves used for " << siz << "Numbers." << endl;

    cout << "Start Time: " << start_t << endl;
    cout << "End Time: " << end_t << endl;

      diff_t = double(end_t - start_t) / CLOCKS_PER_SEC; //calculate the time difference CLOCKS_PER_SEC = 1000; ref time.h line 29

    cout << "Total Process Time Consumed:" << diff_t << " Seconds .(Including Display loop)" << endl;

    return 0;
}
