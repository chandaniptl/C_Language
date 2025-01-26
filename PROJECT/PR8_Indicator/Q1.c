#include<stdio.h>

int main()
{
    int i, count=0;
    char str[50], *p;
    printf("Enter A String:\n");
    gets(str);
    p=str;
    while(*p!='\0')
    {
       count++;
       p++;
    }
    printf("%d", count);
}
