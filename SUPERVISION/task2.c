#include <stdio.h>
struct students
{
//     - car_id
// - car_make
// - car_model
// - car_year
// - car_color
// - car_price
// - car_mileage
    

    int car_id;
    char car_make[100];
    char car_model[100];
    int car_year;
    char car_color[100];
    int car_price;
    int car_mileage;
} car[100];

main()
{

    int n;
    printf("enter number of cars=");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("enter id:");
        scanf("%d", &car[i].car_id);

        printf("enter make :");
        scanf("%s", &car[i].car_make);

        printf("enter model:");
        scanf("%s", &car[i].car_model);

        printf("enter year:");
        scanf("%d", &car[i].car_year);

        printf("enter color:");
        scanf("%s", &car[i].car_color);

        printf("enter price:");
        scanf("%d", &car[i].car_price);

        printf("enter mileage:");
        scanf("%d", &car[i].car_mileage);
    }
    for (int i = 0; i < n; i++)
    {
        printf("id %d\n",car[i].car_id);
        printf("make %s\n",car[i].car_make);
        printf("model %s\n",car[i].car_model);
        printf("year %d\n",car[i].car_year);
        printf("color %s\n",car[i].car_color);
        printf("price %d\n",car[i].car_price);
        printf("mileage %d\n",car[i].car_mileage);
    }
}