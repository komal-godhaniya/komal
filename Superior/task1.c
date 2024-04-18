#include <stdio.h>
int main() {
    int a,arr[a],sum=0;
    
    printf("Enter size of array:");
    scanf("%d",&a);
    
    for(int i=0; i<a; i++){
        printf("a[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<a; i++){
        sum+=arr[i];
    }
    printf("\n sum = %d",sum);
}