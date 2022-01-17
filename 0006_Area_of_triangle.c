#include<stdio.h>
#include<math.h>
int main()
{
    float s1,s2,s3,a,sp;
    printf("Enter the three sides of the triangle : ");
    scanf("%f\n%f\n%f",&s1,&s2,&s3);
    sp=(s1+s2+s3)/2;
    a=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
    printf("The area of the triangle : %5.2f ",a);
    return 0;

}