#include<stdio.h>
main(){
    
    // TASK-8

    // 1
    // 2    3
    // 4    5   6
    // 7    8   9   10
    // 11   12  13  14 15

    int count;

    for (int i=1;i<6;i++)
    {
        for (int j=1; j<=i;j++)
        {
           printf("%3d",count);
           count++;
        }
        printf("\n");
    }

}
