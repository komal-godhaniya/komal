#include <stdio.h>
int main() {
    int a,arr[a],max;
    max=arr[0];
    
    printf("Enter size of array:");
    scanf("%d",&a);
    
    for(int i=0; i<a; i++){
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<a; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("max=%d",max);
}