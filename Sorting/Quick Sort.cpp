#include <iostream>

using namespace std;

int elements[1000];

void exchange(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int Parition(int l, int h){

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

void QuickSort(int low, int high){
  int pivot_point;
  if(low < high)
  {
    pivot_point = Parition(low, high);

      QuickSort(low, pivot_point-1);
      QuickSort(pivot_point+1, high);
  }
}

int main()
{
  int siz;
  cout << "\tArray Sorting Algorithm" << endl;
  cout << "\t=======================" << endl;
  cout << "\t\tQuick Sorting" << endl;
  cout << "\t\t-------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<" numbers: " << endl;
    for(int i = 0; i<siz; i++){
      cin >> elements[i];
    }

    QuickSort(0, siz-1);

    cout << "Sorted Array: " << endl;
      for(int i=0; i<siz; i++){
        cout << elements[i] << " " ;
      }

    return 0;
}
