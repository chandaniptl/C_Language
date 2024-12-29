#include <stdio.h>

int main()
{
    int fn, sn, tn, small_num;

    printf("First Number Are:");
    scanf("%d", &fn);

    printf("Second Number Are:");
    scanf("%d", &sn);

    printf("Thired Number Are:");
    scanf("%d", &tn);

    if(fn<sn)
    {
        if(sn<tn)
        {
            small_num =fn;
        }
    }
    else{
        if(sn<tn){
            small_num=sn;
        }
        else{
            small_num=tn;
        }
    }

    printf("Smallest Number Is:%d",small_num);
    return 0;
}