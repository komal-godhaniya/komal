#include<stdio.h>
main(){
    
    // task-2
    
    int a,b,c;

    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);    
    printf("enter the value of c:");
    scanf("%d",&c);

    if (a>b)
    {
      if (a>c)
      {
        printf("a is max");
      }
      else{
        printf("c is max");
      }
    }
    else{
        if (b>c)
        {
          printf("b is max");
        }
        else{
            printf("c is max");
        }
        
    }
    
}