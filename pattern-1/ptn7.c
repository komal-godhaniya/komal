#include<stdio.h>
main(){

    // TASK-7

    // A
    // B A
    // C B A
    // D C B A
    // E D C B A


    for (int i=65; i<=69; i++)
    {
        for (int j=i; j>=65; j--)
        {
           printf("%c",j);
        }
        printf("\n");
    }


    
}