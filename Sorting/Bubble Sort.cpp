#include <iostream>

using namespace std;

int BubbleSort(int elements[], int siz){

  int temp;

  // loop will start from second Index and compare with previous one
    for(int i=0; i<siz-1; i++){
      // second loop will find the position of number
      for(int j =0; j<siz-i-1; j++){
        // Ex: elements[0] > elements[1] then swap their values
        if(elements[j] > elements[j+1]){
          temp = elements[j];
          elements[j] = elements[j+1];
          elements[j+1] = temp;

          // this will count all moves taken
        }
      }
    }
	
    cout << "Sorted Array: " << endl;
    for(int i=0; i<siz; i++){
      cout << elements[i] << " ";
    }

    cout << endl;
}

int main(){

  int siz;

  cout << "\t    Array Sorting Algorithm" << endl;
  cout << "\t    =======================" << endl;
  cout << "\t\tBubble Sorting" << endl;
  cout << "\t\t--------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<" numbers: " << endl;
    int elements[siz];

      for(int i = 0; i<siz; i++){
        cin >> elements[i];
      }
        BubbleSort(elements, siz);

    return 0;
}
