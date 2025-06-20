#include<stdio.h>
#include<math.h>
int main()
{
    int num,root;
    
    printf("enter the number to find square root\t");
    scanf("%d",&num);
    
    root=sqrt(num);
    
    printf("root of the given number is %d",root);
    return 0;
}
