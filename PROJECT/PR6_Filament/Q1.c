#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int palindrom=1;

    printf("Enter A String:");
    scanf("%s", str);

    int length=strlen(str);


    palindrom=1;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrom=0;
            break;
        }
        
    }

    if (palindrom)
    {
       printf("This String Is Palindrom!!\n");
    }else
    {
        printf("This String Is Not Palindrom!!");
    }
    return 0;
    
}