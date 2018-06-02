#include <stdio.h>
#include <stdlib.h>


int LinearSearch(int elements[], int siz, int key){

  int i,pos;

    if(siz==1){
      if(elements[0] == key){
        return siz;
      }
      else
        return 0;
    }
    else{
      for(i=0; i<siz; i++){
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
    int siz, key, i;

    printf("\t\t\tLinear Search Implementation Algorithm\n");
    printf("\t\t\t--------------------------------------\n");

      printf("\tEnter Array Size: ");
        scanf("%d",&siz);

        int elements[siz];
        printf("\tEnter elements of array: \n");
          for(i=0; i<siz; i++){
            scanf("%d",&elements[i]);
          }

        printf("\tEnter Search Number: ");
          scanf("%d",&key);

				int result = LinearSearch(elements, siz, key);

          if(result == 0){
            printf("\tItem Not Found\n");
          }
          else{
            printf("\tItem %d found at position: %d\n", key, result);
          }

    return 0;
}
