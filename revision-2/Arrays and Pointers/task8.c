#include <stdio.h>

int main() {
   int array[10];

      for (int i = 0; i <=10; i++)
      {
        printf("Enter array =");
      scanf("%d",&array);
      }

   int loop, largest, second;

   if(array[0] > array[1]) {
      largest = array[0];
      second  = array[1];
   } 
   else {
      largest = array[1];
      second  = array[0];
   }

   for(loop = 2; loop < 10; loop++) {
      if( largest < array[loop] ) {
         second = largest;
         largest = array[loop];
      } else if( second < array[loop] ) {
         second =  array[loop];
      }
   }

   printf(" Second largest - %d \n", second);   


}