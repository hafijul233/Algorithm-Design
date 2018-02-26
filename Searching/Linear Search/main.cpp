#include <iostream>

using namespace std;

int LinearSearch(int elements[], int siz, int key){

    if(siz==1){
      if(elements[0] == key){
        return siz;
      }
      else
        return 0;
    }
    else{
        int pos;
      for(int i=0; i<siz; i++){
        if(elements[i] == key ){
          pos = i+1;
          break;
        }
        else{
          pos = 0;
        }
      }
      return pos;
    }
}

int main()
{
    cout << "\tSearching Algorithm" << endl;
    cout << "\t===================" << endl;
    cout << "\t\tLinear Search" << endl;
    cout << "\t\t-------------" << endl;

      int siz;
      cout << "Enter Array Size: ";
        cin >> siz;

        int elements[siz];
        cout << "Enter elements of array: " << endl;
          for(int i=0; i<siz; i++){
            cin >> elements[i];
          }

        int key;
        cout << "Enter Search Number: ";
          cin >> key;
        int result = LinearSearch(elements, siz, key);

          if(result == 0){
            cout << "Item Not Found" << endl;
          }
          else{
            cout << "Item " << key << " found at position: " << result << endl;
          }

    return 0;
}
