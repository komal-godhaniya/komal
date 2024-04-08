#include <stdio.h>

void calculateCube(int x){
    printf("value for cube:");
    scanf("%d",&x);
    
    printf("CUBE:%d",x*x*x);

}

int main() {
    
    int a;
    calculateCube(a);
}