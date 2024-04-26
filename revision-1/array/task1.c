#include <stdio.h>
 main() {
   int arr[3][3],sum;
 
   printf("Enter array's elements:\n");

   for(int i=0; i<=2; i++)
   {
       for(int j=0; j<=2; j++)
       {
           printf("enter value:");
           scanf("%d",&arr[i][j]);
       }
       printf("\n");
   }
   for(int a=0; a<3; a++){
       for(int b=0; b<3; b++){
           printf("%d",arr[a][b]);
           sum+=arr[a][b];
       }
       printf("\n");
   }
   printf("%d\n",sum);
}
