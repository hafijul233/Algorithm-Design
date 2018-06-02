#include <iostream>

using namespace std;

void SelectionSort(int elements[], int siz){

  int temp;

  // loop will start from second Index and compare with previous one
    for(int i=0; i<siz; i++){
      int j = i;
      for(int k=i+1; k<siz; k++){

        if(elements[k]<elements[j])
            j = k;

        temp = elements[i];
        elements[i] = elements[j];
        elements[j] = temp;

      }
    }

    cout << "Sorted Array: " << endl;
    for(int i=0; i<siz; i++){
      cout << elements[i] << " ";
    }

    cout << endl;
}

int main()
{

  int siz;

  cout << "\t    Array Sorting Algorithm" << endl;
  cout << "\t    =======================" << endl;
  cout << "\t\tSelection Sorting" << endl;
  cout << "\t\t-----------------" << endl;
    cout << "Enter Size of Array: " ;
      cin >> siz;

    cout << "Enter "<< siz <<" numbers: " << endl;
    int elements[siz];

      for(int i = 0; i<siz; i++){
        cin >> elements[i];
      }

        SelectionSort(elements, siz);



    return 0;
}
