#include <iostream>
#include <time.h>
#include <fstream>

using namespace std;

int BubbleSort(int elements[], int siz){

  int counter = 0, temp;

  // loop will start from second Index and compare with previous one
    for(int i=0; i<siz-1; i++){

      // second loop will find the position of number
      for(int j =0; j<siz-i-1; j++){
        // Ex: elements[0] > elements[1] then swap their values
        if(elements[j] > elements[j+1]){

          temp = elements[j];
          elements[j] = elements[j+1];
          elements[j+1] = temp;

          counter++;// this will count all moves taken
        }
      }
    }

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
  cout << "\t\tBubble Sorting" << endl;
  cout << "\t\t--------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<"numbers: " << endl;
    int elements[siz];

      for(int i = 0; i<siz; i++){
        cin >> elements[i];
      }

      start_t = clock();

        total_moves = BubbleSort(elements, siz);

      end_t = clock();

    cout << "Total [ " << total_moves <<" ] Moves used for " << siz << "Numbers." << endl;
    	// Tells how much moves taken to sort 
    cout << "Start Time: " << start_t << endl;
    cout << "End Time: " << end_t << endl;

      diff_t = double(end_t - start_t) / CLOCKS_PER_SEC; //calculate the time difference CLOCKS_PER_SEC = 1000; ref time.h line 29

    cout << "Total Process Time Consumed:" << diff_t << " Seconds .(Including Display loop)" << endl;

    return 0;
}
