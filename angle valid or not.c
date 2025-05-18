#include<stdio.h>
int main()
{
    int a,b,c,sum;
    
    printf("ENTER THE FIRST ANGLE\t");
    scanf("%d",&a);
    
    printf("ENTER THE SECOND ANGLE\t");
    scanf("%d",&b);
    
    printf("ENTER THE THIRD ANGLE\t");
    scanf("%d",&c);
    
    sum=a+b+c;
    
    if(a==0|b==0|c==0);
    {
        printf("INVALID ANGLE\t");
    }
    else if(sum==180)
    {
        printf("the triangle is not valid");
    }
    return 0;
    
}
