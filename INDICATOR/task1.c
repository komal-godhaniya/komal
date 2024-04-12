#include <stdio.h>
int cube(int *b){
    printf("cube of given value: %d",(*b)*(*b)*(*b));
}
int main() {
    int b;
    
    printf("Enter The Value for cube:");
    scanf("%d",&b);
    
    cube(&b);
}
