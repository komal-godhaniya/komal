#include<stdio.h>
 main()
{
	int k,number;

    printf("enter your number:");
    scanf("%d",&number);

	for(k=1;k<=10;k++)
	{
		printf("%d*%d=%d\n",number,k,number*k);
	}
}