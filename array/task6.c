#include<stdio.h>
main()
{
    // task-6
    
    int arr[5];
    int max= arr[5];
    
    for(int i=0; i<5; i++){
        printf("enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
    if(arr[i]>max){
        max=arr[i];
    }
    }
    
    printf(" max value :%d\n",max);
    
}