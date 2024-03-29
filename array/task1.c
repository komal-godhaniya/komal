#include <stdio.h>
int main() {
    
    // task-1
    
    int arr[5];
    
    for(int i=0; i<5; i++){
        printf("enter value:");
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d\n", arr[i]);
    }
  
}