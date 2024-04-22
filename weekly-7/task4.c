#include<stdio.h>
main(){
    
    // task-4
    
    int year;
    
    printf("Enter year =");
    scanf("%d",&year);
    
    if(year%4==0){
        printf("this year is leap year...");
    }
    else{
        printf("this year is not leap year...");
    }
    
}