#include<stdio.h>
main(){
    
    // TASK-6

    // 1 0 1 0 1
    // 1 0 1 0
    // 1 0 1
    // 1 0 
    // 1


    for (int i=1; i<=5; i++)
    {
        for (int j=5; j>=i; j--)
        {
           if (j%2==0)
           {
            printf("0");
           }
           else{
            printf("1");
           }
           
        }
        printf("\n");
    }

}
