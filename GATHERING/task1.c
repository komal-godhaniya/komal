#include <stdio.h>
int squaresum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            sum+=(i*i);
        }
    }    
    return sum;
}
int main()
{
    int n;
    printf("enter n value:");
    scanf("%d",&n);
    
    printf("%d",squaresum(n));
    return 0;
}

