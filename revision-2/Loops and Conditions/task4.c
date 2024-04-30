#include<stdio.h>
main(){
    
    // task-4
    
    int year;
    
    printf("Enter year = ");
    scanf("%d",&year);
    
    if(year % 4 == 0){
        printf("THis is leap year...");
    }
    else{
        printf("This is not leap year...");
    }
}