#include<stdio.h>

int main(){
    int no1,no2;
    printf("Enter First Number:");
    scanf("%d",&no1);

     printf("Enter Second Number:");
    scanf("%d",&no2);

    while(no1<=no2){
        if(no1%4==0){
            printf("%d\n",no1);
        }
        no1++;
    }

    return 0;
}