#include<stdio.h>
int main(){

    int arr_4[2][3];
    for(int i=0; i<=1; i++)
    {
        for(int j=0; j<=2; j++)
        {
            printf("Enter Value Elements : ");
            scanf("%d",&arr_4[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<=1; i++)
    {
        int sum=0;
        for(int j=0; j<=2; j++)
        {
            sum += arr_4[i][j];
        }
        printf("\nSum Of %d Rows is : %d",i,sum);
    }
    printf("\n");
}