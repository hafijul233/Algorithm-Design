#include <stdio.h>
#include <stdlib.h>

int elements[1000];

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
    int siz, key, i;

    printf("\t\t\tBinary Search Implementation Algorithm\n");
    printf("\t\t\t--------------------------------------\n");

      printf("\tEnter Array Size: ");
        scanf("%d",&siz);

        int elements[siz];
        printf("\tEnter elements of array: \n");
          for(i=0; i<siz; i++){
            scanf("%d",&elements[i]);
          }

          QuickSort(elements,0,siz);

            printf("Sorting Elements in Ascending order:\n");
            for(i=0;i<siz;i++){
              printf("%d\t",elements[i]);
            }

        printf("\n\tEnter Search Number: ");
          scanf("%d",&key);


				int result = BinarySearch(elements, siz, key);

          if(result == 0){
            printf("\tItem Not Found\n");
          }
          else{
            printf("\tItem %d found at position: %d\n", key, result);
          }

    return 0;
}
