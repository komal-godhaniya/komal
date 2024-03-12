#include<stdio.h>
main()
{

    // TASK-1 //

    int a,b,c;

    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);    
    printf("enter the value of c:");
    scanf("%d",&c);

    if (a<b)
    {
       if (a<c)
       {
        printf("a is minimum");
       }
       else{
        printf("c is minimum");
       }
    }
    else{
        if (b<c)
        {
           printf("b is minimum");
        }
        else{
            printf("c is minimum");
        }
        
    }
    

    // TASK-2 //


    int a,b,c,d;

    printf("Enter The number a=");
    scanf("%d",&a);

     printf("Enter The number b=");
    scanf("%d",&b);

     printf("Enter The number c=");
    scanf("%d",&c);

     printf("Enter The number d=");
    scanf("%d",&d);

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is max");
            }
            
        }
        
       
    }

     else if(b>c)
        {
            if (b>d)
            {
               printf("B is max");
            }
            
        }

    else if (c>d){
        printf("c is max");
    }
        
        else{
            printf("D is max");
        }
}
