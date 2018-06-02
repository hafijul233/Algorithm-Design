#include <iostream>

using namespace std;

void InsertSort(int elements[], int siz){

   for (int i = 1; i < siz; i++){
      int temp = elements[i];
      int j = i-1;
        //Move elements of elements[0..i-1], that are
        //greater than temp, to one position ahead
        //of their current position
      while (j >= 0 && elements[j] > temp){
          elements[j+1] = elements[j];
          j = j-1;
      }
     elements[j+1] = temp;
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
  cout << "\t\tInsertion Sorting" << endl;
  cout << "\t\t-----------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<" numbers: " << endl;
    int elements[siz];

      for(int i = 0; i<siz; i++){
        cin >> elements[i];
      }

        InsertSort(elements, siz);

    return 0;
}
