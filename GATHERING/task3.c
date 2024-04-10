#include <stdio.h>
int calculateFactorial(int fact){
    if(fact<=1){
        return 1;
    }
    else{
      return fact*calculateFactorial(fact-1);
    }
}
int main() {
   int fact;
   
   printf("Enter Your Value:");
   scanf("%d",&fact);
   
   printf("factorial of given number is...%d",calculateFactorial(fact));
}