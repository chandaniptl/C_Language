#include<stdio.h>

int main(){

    int start,end;
    printf("Enter Your Start Position:");
    scanf("%d",&start);

    printf("Enter Your End position:");
    scanf("%d",&end);

    while(start<=end){
        printf("%d\n",start);
        start++;
    }

    return 0;
}