#include <iostream>

using namespace std;

void exchange(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int Parition(int elements[], int l, int h){

  int pivot = elements[h];
  int i = (l-1);

  for(int j=l; j <= h-1; j++){

    if(elements[j] <= pivot){
      i=i+1;
      exchange(&elements[i], &elements[j]);

    }
  }

  exchange(&elements[i+1], &elements[h]);

  return (i+1);

}

void QuickSort(int elements[], int low, int high){
  int pivot_point, siz = high+1;
  if(low < high)
  {
    pivot_point = Parition(elements, low, high);
      QuickSort(elements, low, pivot_point-1);
      QuickSort(elements, pivot_point+1, high);
  }

}

int main(){

	int siz;

  cout << "\t    Array Sorting Algorithm" << endl;
  cout << "\t    =======================" << endl;
  cout << "\t\tQuick Sorting" << endl;
  cout << "\t\t--------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    int elements[siz];

    cout << "Enter "<< siz <<" numbers: " << endl;
    for(int i = 0; i<siz; i++){
      cin >> elements[i];
    }

    QuickSort(elements, 0, siz-1);

		cout << "Sorted Array: " << endl;
      for(int i=0; i<siz; i++){
        cout << elements[i] << " " ;
     }

    return 0;
}
