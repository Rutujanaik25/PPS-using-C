#include<stdio.h>
int main()
{
    int marks;
    
    printf("enter the marks\t");
    scanf("%d",&marks);
    
    if(marks>=100)
    
    {
        printf("Invalid number");
    }
    else if(marks>=80)
    {
        printf("A garde");
    }
    else if (marks>=70)
    {
        printf("B garde");
    }
    else if(marks>=60)
    {
        printf("C grade");
    }
    else if(marks>=50)
    {
        printf("D garde");
    }
    else if(marks>=40)
    {
        printf("E garde");
    }
    else if(marks<40)
    {
        printf("fail");
    }
    return 0;
}
    
    
    
    
    
    
    
