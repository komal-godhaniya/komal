#include <stdio.h>  
int main()  
{  
    // task-1
    
    int A;  
  
    printf("Enter the number A: ");  
    scanf("%d", &A);  
  
    if (A > 0)  {
        printf("%d is positive.", A); 
        }
    else if (A < 0)  {
        printf("%d is negative.", A);  
        }
    else {
        printf("%d is zero.", A);  
        }
        
}