#include <stdio.h>
int main()
{
    int n, i, small ;
    int array[n];  
 
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);  

    for (i = 0; i < n; i++)
    {   
        printf("element  %d : ",i);
        scanf(" %d", &array[i]);
    }
 
    small  = array[0];
 
    for (i = 0; i < n ; i++) 
    {
        if (small  > array[i])
        {
       		small  = array[i];
		}
        
    }
 
    printf("\n smallest element present in the given array is : %d", small );

}
