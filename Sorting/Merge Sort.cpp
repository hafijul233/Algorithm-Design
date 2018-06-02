#include <iostream>

using namespace std;

void Merge(int elements[], int low, int mid, int high){

  int h=low, i=low, j=mid+1, k;
  int arr_size = sizeof(elements)/sizeof(elements[0]);
  int temp[arr_size];

  while((h<=mid) && (j<high)){
    if(elements[h] <= elements[j]){
      temp[i] = elements[h];
      h++;
    }
    else{
      temp[i]=elements[j];
      j++;
    }
    i++;
  }

  if(h > mid){
    for(k=j;k<=high; k++){
      temp[i] = elements[k];
      i++;
    }
  }
  else{
    for(k=j;k<=high; k++){
      temp[i] = elements[k];
      i++;
    }
  }

  for(k=low; k<=high; k++)
    elements[k] = temp[k];

}

void MergeSort(int elements[], int low, int high){
  int mid;
  if(low < high){

    mid = (low+high)/2;

      MergeSort(elements, low, mid);

      MergeSort(elements, mid+1, high);

      Merge(elements, low, mid, high);
  }

}

int main()
{
int siz;

  cout << "\t    Array Sorting Algorithm" << endl;
  cout << "\t    =======================" << endl;
  cout << "\t\tMerge Sorting" << endl;
  cout << "\t\t--------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    int elements[siz];

    cout << "Enter "<< siz <<" numbers: " << endl;
    for(int i = 0; i<siz; i++){
      cin >> elements[i];
    }

    MergeSort(elements, 0, siz-1);

    cout << "Sorted Array: " << endl;
      for(int i=0; i<siz; i++){
        cout << elements[i] << " " ;
	  }

    return 0;
}
