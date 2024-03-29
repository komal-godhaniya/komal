#include<stdio.h>
main()
{
    // task-4
    
    int arr[5];
    
    for(int i=0; i<5; i++){
        printf("enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
         if(arr[i] %2!=0){
        printf("%d\n",arr[i]);
    }
    }
 
}