#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char first[50], last[50];
    scanf("%s%s",&first,&last);

    for(int i=0; first[i]!='\0'; i++)
    first[i]= tolower(first[i]);

    for(int i=0; last[i]!='\0'; i++)
    last[i]= tolower(last[i]);

    printf("Username:%s%s\n", first, last);
    printf("Initials:%c%c", toupper(first[0]), toupper(last[0]));
    return 0;
}