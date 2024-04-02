#include <stdio.h>

int main()
{
   int arr[3][3];
   int max= arr[3][3];
   
     for(int i=0; i<=2; i++){
       
      for(int j=0; j<=2; j++){
          printf("enter your choice:");
          scanf("%d",&arr[i][j]);
      }
      printf("\n");
   }
 
    for(int i=0; i<=2; i++){
       
      for(int j=0; j<=2; j++){
       if(arr[i][j]>max){
           max=arr[i][j];
        }
      }
   }  
   printf(" max value :%d\n",max);
}
