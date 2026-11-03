#include<stdio.h>
int main()
{
    int n,factorial=1;

    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
       factorial = factorial * i;
    }
    printf("Factorial= %d\n",factorial);
    
    return 0;
}