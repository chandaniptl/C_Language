#include<stdio.h>

int main()
{
    int number;

    printf("Enter Rows and Columns:");
    scanf("%d", &number);

    int arr[number][number],  transpose[number][number];

    printf("Enter Array's Elements:\n");
    for (int i = 0; i < number; i++)
    {
       for (int j = 0; j < number; j++)
       {
        printf("a[%d][%d] = ", i, j);
        scanf("%d", &arr[i][j]);
       }
       
    }

    for (int i = 0; i < number; i++)
    {
       for (int j = 0; j < number; j++)
       {
       transpose[j][i] = arr[i][j];
       }
       
    }
    
    printf("Transpose Matrix:\n");
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            printf("%d", transpose[i][j]);
        }
         printf("\n");
    }
    
   
    return 0;
}