#include <stdio.h>

void divideNumber(int x,int y){
    printf("value one:");
    scanf("%d",&x);
    printf("value two:");
    scanf("%d",&y);
    
    int Q,R;

    Q=x/y;
    R=x%y;
    
    printf("Reminder:%d\n",R);
    
    if( R==0 ){
      printf("Quotient:%d\n",Q);
    }
    
}

int main() {
    
    int a,b;
    divideNumber(a,b);
}