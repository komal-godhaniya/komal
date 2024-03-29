#include<stdio.h>
main()
{
    // task-5
    
    int arr[5];
    int even=1;
    
    for(int i=0; i<5; i++){
        printf("enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        
        if(arr[i] %2==0){
        even *=arr[i];
    }
    }
    
    printf("product of even number:%d",even);
}