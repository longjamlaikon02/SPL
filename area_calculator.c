#include<stdio.h>
#include<string.h>
int main()
{
    char shape[30];
    float width, height, base, radius, area;
    double pi =3.141592653589793;

    scanf("%s",shape);

    if(strcmp(shape, "rectangle") == 0)
    {
        scanf("%f%f",&width, &height);
        area= width * height;
    }
    else if(strcmp(shape, "triangle") == 0)
    {
        scanf("%f%f",&base, &height);
        area= (base * height)/2;
    }
    else if(strcmp(shape, "circle") == 0)
    {
        scanf("%f",&radius);
        area= pi * radius * radius;
    }
    printf("Area:%.2f",area);
    return 0;
}