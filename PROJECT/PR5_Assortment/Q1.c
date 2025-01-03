#include<stdio.h>

int main(){
    int n;

    printf("Enter Array Size:");
    scanf("%d", &n);

    int arr[n];

    printf("Enter Array Element:\n");
    for (int  i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    

    printf("Negative Elements From an Array:");
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < 0)
      {
        printf("%d", arr[i]);
      }
    }
    printf("\n");
    return 0;
}