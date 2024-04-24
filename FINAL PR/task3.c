#include <stdio.h>

    // task-3
    
num_rev(k)
{
    
    for(int i=k;i>=1;i--){
        printf("%d",i);
    }
    
}
int main() {
    
    int k;
    
    printf("enter number=");
    scanf("%d",&k);
    
    for(int i=1;i<=k;i++){
        printf("%d",i);
    }
    
    printf("\n");
    
    num_rev(k);
    
}