#include<stdio.h>
main(){
    int num,i,fact=1;

    printf("enter your number:");
    scanf("%d",&num);

    for (i=1; i <=num; i++)
    {
        fact*=i;
    }

    printf("factorial of all number:%d",fact);

}