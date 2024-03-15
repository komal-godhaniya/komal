#include<stdio.h>
main(){
    int a=1,number;

    printf("Enter any number:");
    scanf("%d",&number);

    while(a <= number)
	{
		printf("%d\n",a);
		a++;
	}
}