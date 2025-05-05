#include<stdio.h>
int main()
{
    float bs,tr,hr,gs;
    
    printf("Enter basic salary of Ramesh \t");
    
    tr=0.4*bs;
    printf("\n travelling allowance is %f\t",tr);
    
    hr=0.2*bs;
    printf("\n travelling allowance is %f\t",hr);
    
    gs=(hr+tr+bs);
    printf("\n gross salary allowance is %f\t",gs);
     
     return 0;
    
}
