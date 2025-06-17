#include<stdio.h>
int main()
{
    int a[10]={21,22,55,66,35,85,96,75,47,12},num,i;
    printf("enter the random number\t");
    scanf("%d",&num);
    
    for(i=0;i<11;i++)
    {
        if(a[i]==num)
    {
        printf("the number is at %d",i);
        break;
    }
    }
    return 0;
}
