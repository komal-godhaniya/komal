#include <stdio.h>
#include <string.h>
int main()
{
    //Question-15

    char len_str[100];
    int count=0;
    printf("Enter String : ");
    scanf("%s",&len_str);
    for(int i=0; len_str[i]; i++)
    {
        count++;
    }
    printf("Length Of String is : %d",count);


    return 0;
}