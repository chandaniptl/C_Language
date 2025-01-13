#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int frequancy[256]={0};

    printf("Enter A String:");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        frequancy[str[i]]++;
    }
    
    printf("Frequancy Of Each Latter:\n");

    for (int i = 0; i < 256; i++)
    {
       if (frequancy[i] > 0)
       {
            printf("%c => %d\n", i, frequancy[i]);
       }
       
    }
    return 0;
}