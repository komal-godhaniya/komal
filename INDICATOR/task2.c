#include <stdio.h>

int swap(int *a1, int *b1, int *c1){
    int *k;
    
    k=*a1;
    *a1=*b1;
    *b1=*c1;
    *c1=k;
    
    printf("after swaping:\n");
    printf("a=%d\n",*a1);
    printf("b=%d\n",*b1);
    printf("c=%d",*c1);
}

int main() {
    int a,b,c;
    
    printf("Enter Value Of A = ");
    scanf("%d",&a);
    printf("Enter Value Of B = ");
    scanf("%d",&b);
    printf("Enter Value Of C = ");
    scanf("%d",&c);
    
    printf("before swaping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n\n",c);

    swap(&a,&b,&c);
}
