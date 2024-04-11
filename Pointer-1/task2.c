#include <stdio.h>
 int max(int *a, int *b){
    if(*a>*b){
        printf("MIN = %d",*b);
    }
    else{
        printf("MIN = %d",*a);
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