#include <stdio.h>

void printTable(){
    int x=5;
    
    printf("TABLE OF 5 NUMBER....\n");
    for(int i=1; i<=10; i++)
    {
        printf("\n%d*%d=%d",x,i,x*i);
    }
}

int main() {

    printTable();
}