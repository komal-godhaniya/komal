#include <stdio.h>
struct students
{
    int book_id;
    char book_title[100];
    char book_author[100];
    char book_genre[100];
    char book_publisher[100];
    int book_publication_year;
    int book_price;
} brs[100];

main()
{

    int n;
    printf("enter number of books=");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter id:");
        scanf("%d", &brs[i].book_id);

        printf("enter title :");
        scanf("%s", &brs[i].book_title);

        printf("enter author:");
        scanf("%s", &brs[i].book_author);

        printf("enter genre:");
        scanf("%s", &brs[i].book_genre);

        printf("enter publisher:");
        scanf("%s", &brs[i].book_publisher);

        printf("enter year:");
        scanf("%d", &brs[i].book_publication_year);

        printf("enter price:");
        scanf("%d", &brs[i].book_price);
    }
    for (int i = 0; i < n; i++)
    {
        printf("id %d\n",brs[i].book_id);
        printf("title %s\n",brs[i].book_title);
        printf("author %s\n",brs[i].book_author);
        printf("genre %s\n",brs[i].book_genre);
        printf("publisher %s\n",brs[i].book_publisher);
        printf("year %d\n",brs[i].book_publication_year);
        printf("price %d\n",brs[i].book_price);
    }
}