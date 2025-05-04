#include<stdio.h>
int main()
{
    int num,rem;
    
    printf("Enter the number:\t");
    scanf("%d",&num);
   if ( num%10==0)
{
        printf("the entered number %d completely divisible by 10",num);
    }
    
   else
   
     {
    
        printf("the entered number %d is not completely divisible by 10",num);
    }
    return 0;
    
    
}
