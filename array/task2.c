#include<stdio.h>
main()
{
    // task-2
    
     int arr[5];
     int sum=0;
    
    for(int i=0; i<5; i++){
        printf("enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        sum+=arr[i];
       
    }
     printf("%d\n", sum);
     
}