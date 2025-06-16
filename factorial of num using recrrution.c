#include<stdio.h>

int main()
{
    int num,result;
    
    printf("Enter the number\t");
    scanf("%d",&num);
    
    result=fact(num);
    printf("factorial of %d is %d",num,result);
    
    return 0;
}
int fact(num)
{
    if(num==0)
    {
        return 1;
    }
    else
    {
      num=num*fact(num-1);
      return num;
    }
}
