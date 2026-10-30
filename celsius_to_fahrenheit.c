#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    scanf("%f",&celsius);

    fahrenheit = celsius * 9/5 + 32;
    printf("%.0f celsius = %.1f fahrenheit", celsius, fahrenheit);
    return 0;
}