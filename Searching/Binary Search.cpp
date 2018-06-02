#include <iostream>

using namespace std;

//Using QuickSort to Sort All Elements of Array
void exchange(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

int Parition(int elements[], int l, int h){

  int pivot = elements[h];
  int i = (l-1),j;

  for(j=l; j <= h-1; j++){

    if(elements[j] <= pivot){
      i=i+1;
      exchange(&elements[i], &elements[j]);
    }
  }

  exchange(&elements[i+1], &elements[h]);

  return (i+1);

}
void QuickSort(int elements[], int low, int high){
  int pivot_point;
  if(low < high)
  {
    pivot_point = Parition(elements, low, high);

      QuickSort(elements, low, pivot_point-1);
      QuickSort(elements, pivot_point+1, high);
  }
}

//Binary Search Algorithm
int BinarySearch(int elements[], int siz, int key){

  int i, low = 1, high = siz, mid;

    if(low==high){
      if(elements[0] == key){
        return low;
      }
      else
        return 0;
    }

    else{

      while(low <= high){

          mid = (low+high)/2;

        if( key < elements[mid])
          high = mid-1;

        else if(key > elements[mid])
          low = mid+1;

        else
          return mid;

      }
    }
}
//Main Function
int main()
{
  int siz, key;

  cout << "\t    Array Searching Algorithm" << endl;
  cout << "\t    =========================" << endl;
  cout << "\t\tBinary Search" << endl;
  cout << "\t\t-------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<" numbers: " << endl;
    int elements[siz];

      for(int i = 0; i<siz; i++){
        cin >> elements[i];
      }

      QuickSort(elements,0,siz);

      cout << "Sorting Elements in Ascending order:\n" << endl;
        for(int i=0;i<siz;i++){
          cout << elements[i] << " ";
        }
        cout << endl;

        cout << "\tEnter Search Number: ";
          cin >> key;

				int result = BinarySearch(elements, siz, key);
          if(result == 0){
            cout << "\tItem Not Found\n";
          }
          else{
            cout << "\tItem " << key <<" found at position: " << result+1 << endl;
          }

    return 0;
}
