#include <stdio.h> 
  
int main() 
{ 
    // task-1
    
    int rows = 5; 

    for (int i = 0; i < rows; i++) { 

        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
          for (int k = 0; k < rows - i; k++) { 
            printf("* ", k + 1); 
        } 
        printf("\n"); 
    }

    printf("\n\n\n");
    
    // task-2
    
     int rows = 5; 

    for (int i = 0; i < rows; i++) { 

        for (int j = 0; j < 2 * i; j++) { 
            printf(" "); 
        } 
  
        for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
            printf("* ", k + 1); 
        } 
        printf("\n"); 
    } 
    
    printf("\n\n\n");


    // task-3
    
      int rows = 5; 
  
    for (int i = 1; i <=rows; i++) { 
  
        for (int j = 1; j <=i; j++) { 
            printf(" "); 
        } 
  
        for (int k=1; k<=5; k++) { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    
    printf("\n\n\n");

    // task-4
 
      for (int i=1; i<=4; i++)
    {
        for (int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
    
    for (int i=3; i>=1; i--)
    {
        for (int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
    
    printf("\n\n\n");

    //   task-5
    
     for (int i=4; i>=1; i--)
    {
        for (int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
      for (int i=1; i<=4; i++)
    {
        for (int k=4; k>=i; k--)
        {
            printf(" ");
        }
        for (int j=1; j<=i; j++)
        {
            printf("* ",j);
        }
        printf("\n");
    }
    
    printf("\n\n\n");
  
    // task-6
   

    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            if (i==2 && (j>1 && j<5) || i==2 && j>1 && j<5 || i==3 && j>1 && j<5 || i==4 && j>1 && j<5)
            {
               printf("  ");
            }
            else{
                printf("* ");
            }
        }
        
      printf("\n");
    }

    //  task-7

       int i, k, n = 5, j = 0;
 
    for (i = 0; i < n - 1; i++) {
 
        for (k = 1; k < n - i;k++) {
            printf(" ");
        }
 
        for (j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i)
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    for (i = 0; i < 2 * n - 1; i++) {
        printf("*");
    }

    printf("\n\n\n");

    // task-8

      int rows = 5; 
  
    for (int i = 0; i < rows; i++) { 
  
        for (int j = 0; j < 2 * i + 1; j++) { 
            printf(" "); 
        } 
  
        for (int k = 0; k < 2 * (rows - i) - 1; k++) { 
            if (k == 0 || k == 2 * (rows - i) - 2 || i == 0) 
                printf("* ", k + 'A'); 
            else { 
                printf("  "); 
            } 
        } 
        printf("\n"); 
    } 

    

    
    
}