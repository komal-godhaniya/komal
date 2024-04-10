#include <stdio.h>
float rectangleArea(float len, float wid) {

    return len * wid;
}

int main() {
    float len, wid, area;

    printf("Enter length of rectangle=");
    scanf("%f", &len);
    printf("Enter width of rectangle=");
    scanf("%f", &wid);

    printf("The area of the rectangle... %.2f\n", rectangleArea(len,wid));

}