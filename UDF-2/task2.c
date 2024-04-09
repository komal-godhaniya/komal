#include <stdio.h>
#include <string.h>
length(char k[])
{
    int len;

    len = strlen(k);
    return len;
}

int main()
{
   char str[100];
   printf("Enter any string:");
   scanf("%s",&str);
   
   printf("str length :%d",length(str));
   
}
