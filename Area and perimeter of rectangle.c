#include<stdio.h>
int main()
{
    int length, breadth,area, perimeter;
    
    printf("length of rectangle \t");
    scanf("d",&length);
    
    printf("Breadth of rectangle\t");
    scanf("%d", &breadth);
    
    area=length*breadth;
   printf ("area of rectangle is %d\t",area);
    
    perimeter=2*(length*breadth);
    printf("perimeter of rectangle is %d\t", perimeter);
    
    return 0;
    
    
}
