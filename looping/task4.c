#include<stdio.h>
main(){
    int a=1,number;

    printf("Enter any number:");
    scanf("%d",&number);

    while(number >= a)
	{
		if (number%2!=0)
        {
            printf("%d\n",number);
        }
        
		number++;
	}
}