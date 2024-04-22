#include <stdio.h>
int main() {
    
    int k;
    
    printf("enter number=");
    scanf("%d",&k);
    
    for(int i=1;i<=k;i++){
        printf("%d",i);
    }
    
    printf("\n");
    
    for(int i=k;i>=1;i--){
        printf("%d",i);
    }
    
}
