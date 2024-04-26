#include<stdio.h>
main(){
    for(int i=0; i<=5;i++){
        for(int k=i;k<=5;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
     for(int i=4; i>=0;i--){
        for(int k=i;k<=5;k++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
}