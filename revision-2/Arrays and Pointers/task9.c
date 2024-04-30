#include<stdio.h>
void main()
{
	int a[3][3],sum=0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			scanf("%d",&a[i][j]);	
		}
		printf("\n");
	}

     printf("this is array...\n");

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			sum=sum+a[i][j];
		}
		printf("\n");
	}
   printf("total sum of all elements of array=%d",sum);
}
