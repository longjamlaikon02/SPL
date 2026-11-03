#include<stdio.h>
int main()
{
    char item[100];
    float price;
    int quantity;

    printf("Item name:");
    scanf("%s",item);

    printf("Price:");
    scanf("%f",&price);

    printf("Quantity:");
    scanf("%d",&quantity);

    float total = price * quantity;
    printf("Total:%.2f",total);
    

    return 0;


}