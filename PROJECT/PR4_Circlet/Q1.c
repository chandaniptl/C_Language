#include<stdio.h>

int main(){
    int start=41;
    int row=5;


    for(int i = 1; i <= row; i++)
    {
        for ( int j=0; j < i;j++)
        {
           printf("%d", start + j);
        }
        printf("\n");
    }
    return 0;
}