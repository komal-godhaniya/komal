#include<stdio.h>
main(){

    //          *
    //        * * *
    //      * * * * *
    //    * * * * * * *
    //  * * * * * * * * *

    for (int i = 1 ; i<=5 ; i++){
        
        for(int k=i; k<=4; k++){
            printf(" ");
        }
        for(int j =1 ; j<=i*2-1;j++){
            printf("*");
        }
        printf("\n");
    }
    

}
