#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks\n");
    scanf("%d",&marks);
    if (marks<=100 && marks>=85)
    {
        printf("A Grade");
    }
    else if (marks<=84 && marks>=70)
    {
        printf("B Grade");
    }
    else if (marks<=69 && marks>=55)
    {
        printf("C Grade");
    }
    else if (marks<=54 && marks>=40)
    {
        printf("D Grade");
    }
    else
    {
        printf("F Grade");
    }
    
    
    return 0;
}