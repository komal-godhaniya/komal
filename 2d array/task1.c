#include <stdio.h>
int main()
{
   int arr[5];
   
     for(int i=0; i<=4; i++){
       
      printf("enter your choice:");
      scanf("%d",&arr[i]);
   }
   
   for(int i=0; i<=4; i++){
       
       if(arr[i]<0){
           printf("%d\n",arr[i]);
       }
   }
}
