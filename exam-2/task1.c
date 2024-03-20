#include<stdio.h>
main()
{

    // TASK-1


    char ch='a';

    do
    {
        printf("%c",&ch);
        ch+=4;
    } while (ch <= 'z');

    printf("\n\n\n");

    // TASK-2
    
  
   int k;  
   int total=0;  
   printf("Enter a number");  
   scanf("%d",&k);  
   while(k!=0)  
   {  
       k=k/10;  
    total++;    
   }  

   printf("This is total digit %d \n",total);  

    printf("\n\n\n");

    // TASK-3

   int k,sum=0,a,b; 
   printf("enter value of k: ");
   scanf("%d",&k);
   b=k%10;
   while (k >=10)
   {
    k=k/10;
   }
   a=k;
   sum = a+b;
   printf("sum of first and last num =%d",sum);


} 
