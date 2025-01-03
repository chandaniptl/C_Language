3#include<stdio.h>

int main()
{
    int row,col;

    printf("Enter Rows:");
    scanf("%d", &row);
    printf("Enter Columns:");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter Array Elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j=0; j < col; j++ )
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }

    int max=arr[0][0];
    for (int i = 0; i < row; i++)
    {
       for (int j = 0; j < col; j++)
       {
        if (arr[i][j] > max)
        {
            max = arr[i][j];
        }
        
       }
       
    }
    printf("THE LARGE ELEMENT IS:%d\n", max);
    return 0;
}