#include <stdio.h>
 main(){

    //Question-1
    //Prime Or Not

    int num, is_prime = 1;
    printf("Enter Prime Number : ");
    scanf("%d",&num);
    
    if(num<=1 || (num>2 && num%2==0)) {
        is_prime = 0;
    } 
    else{
        for(int i=3; i*i<=num; i+=2) {
            if(num%i==0) {
                is_prime = 0;
                break;
            }
        }
    }

    printf("%d is %s a prime number.\n", num, is_prime ? "" : "not");

}