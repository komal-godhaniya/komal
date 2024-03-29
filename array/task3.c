#include<stdio.h>
main()
{
    // task-3
    
     int arr[5];
     int sum=0;
     int avr;
    
    for(int i=0; i<5; i++){
        printf("enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        sum+=arr[i];
       
    }
     printf("%d\n", sum);
     
     avr=sum/5;
     
     printf("average of sum:%d",avr);
}