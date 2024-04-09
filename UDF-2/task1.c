#include <stdio.h>
int sum (int arr[],int k){
    int i, add;
    for(int i=0; i<k; i++){
        printf("Array Element[%d] :",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<k; i++){
        add+= arr[i];    
    }
    printf("sum is =");
    return add;
}
int main() {
  int k;
  
  printf("Enter Size Of Array:");
  scanf("%d",&k);
  
  int arr[k];
  
  printf("%d", sum(arr,k));
}