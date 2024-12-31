#include <stdio.h>

int main() {
    int size;
    float sum = 0, average;


    printf("Enter array size: ");
    scanf("%d", &size);

    int array[size];


    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
        sum += array[i]; 
    }

    average = sum / size;

    printf("\nAverage of an Array: %.1f\n", average);

    return 0;
}
