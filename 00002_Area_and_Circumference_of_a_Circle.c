#include<stdio.h>
#define PI 3.14 
int main()
{
    int r,a,c;
    printf("Enter the radius of the Circle :");
    scanf("%d",&r);
    printf("Area of the Circle = %5.2f\n",PI*r*r);
    printf("Circumference of the Circle = %5.2f\n",PI*2*r);
    return 0;    
}