#include<stdio.h>
main(){
    
    //Question-2
    //Factorial

    int num_2,i_2,fact=1;
    printf("Enter Number : ");
    scanf("%d",&num_2);
    for(i_2=1; i_2<=num_2; i_2++)
    {
        fact*=i_2;
    }
    printf("Factorial Of All Number : %d",fact);

}