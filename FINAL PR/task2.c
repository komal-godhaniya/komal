#include <stdio.h>    
     
int main()    
{    

    // task-2

    int arr[5];    
    
    for(int i=0; i<5; i++){
        printf("Enter element = ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    int size = sizeof(arr)/sizeof(arr[0]);    
 
    int min = arr[0];    

    for (int i = 0; i < size; i++) {     
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array: %d\n", min);    
    return 0;    
}    