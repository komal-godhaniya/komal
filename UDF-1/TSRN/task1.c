#include <stdio.h>

void addNumbers(int x,int y){
    printf("value one:");
    scanf("%d",&x);
    printf("value two:");
    scanf("%d",&y);
    
    printf("sum of two int:%d",x+y);
    
    
}

int main() {
    
    int a,b;
    addNumbers(a,b);
}