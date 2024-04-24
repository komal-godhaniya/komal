#include <stdio.h>

    // task-5
    
struct house
{
    int room_quantity;
    int enstablished_year;
    char city[100];
} s[100];

main()
{

    int n;
    printf("enter lenth=");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter room :");
        scanf("%d", &s[i].room_quantity);

        printf("enter year :");
        scanf("%d", &s[i].enstablished_year);

        printf("enter city:");
        scanf("%s", &s[i].city);
    }
    for (int i = 0; i < n; i++)
    {
        printf("value of room %d\n",s[i].room_quantity);
        printf("value of year %d\n",s[i].enstablished_year);
        printf("value of city %s\n",s[i].city);
    }
}