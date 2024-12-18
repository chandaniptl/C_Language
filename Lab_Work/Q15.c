#include<stdio.h>

int main(){

    int num;

    printf("enter a number:");
    scanf("%d",&num);

    if(num>0){
        printf("the number is positive\n");
    }else if (num<0)
    {
        printf("the number is negative\n");
    }
    else{
        printf("the number is neutral\n");
    }
    return 0;
    
}