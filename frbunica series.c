#include<stdio.h>
int main()
{
    int i=1,c,p,n;
    while(i<=20)
    {
        p=c;
        c=n;
        n=p+c;
        printf("%d\n",&c);
        i++;
    }
    return 0;
}
