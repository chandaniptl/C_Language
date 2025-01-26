#include<stdio.h>

int main()
{
    FILE *evenfile = fopen("even_file.txt", "w");
    FILE *oddfile = fopen("odd_file.txt", "w");
    
    fprintf(evenfile, "Even numbers:\n");
    fprintf(oddfile, "Odd numbers:\n");
    
    for(int i =50; i <=70; i++)
    {
        if(i % 2 == 0)
        {
            fprintf(evenfile, "%d\n", i);
        }else{
            fprintf(oddfile, "%d\n", i);
        }
    }
    
    fclose(evenfile);
    fclose(oddfile);
    
    printf("Number Written to files Successfully!!\n");
    return 0;
}