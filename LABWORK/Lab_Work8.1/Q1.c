#include<stdio.h>

int main()
{
    int size,i;

    printf("Enter a Number:");
    scanf("%d", &size);

    int array[size];
    
    printf("Enter Array Element:\n");
    for (int i = 0; i < size; i++)
    {
      printf("a[%d] =", i);
      scanf("%d", &array[i]);
    }
    printf("\n Length of an Array: %d\n", size);

    return 0;
}