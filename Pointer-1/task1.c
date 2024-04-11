#include <stdio.h>

 int max(int *a, int *b){
    if(*a<*b){
        printf("MAX = %d",*b);
    }
    else{
        printf("MAX = %d",*a);
    }
}

int main() {
    int a,b;
    
    printf("Enter Value Of A = ");
    scanf("%d",&a);
    printf("Enter Value Of B = ");
    scanf("%d",&b);
    
    max(&a,&b);
}