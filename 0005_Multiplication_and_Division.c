#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Enter the 1st Number : ");
    scanf("%f",&n1);
    printf("Enter the 2nd Number : ");
    scanf("%f",&n2);
    printf("Multiplication = %5.2f ",(n1*n2));
    printf("Division = %5.2f ",(n1/n2));
    
    return 0;
}