#include<stdio.h>
main(){
    
    // task-3
  
     int n1,n2,n3;

      printf("Enter value of n1: ");
      scanf("%d", &n1);
      printf("Enter value of n2: ");
      scanf("%d", &n2);
      printf("Enter value of n3: ");
      scanf("%d", &n3);

     if (n1 >= n2 && n1 >= n3){
      printf(" n1 have largest value = %d", n1);
     }

     else if (n2 >= n1 && n2 >= n3){
      printf("n2 have largest value = %d", n2);
     }
    
     else{
      printf("n3 have largest value = %d", n3);
     }
}