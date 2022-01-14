#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter the Divisor : ");
  scanf("%d",&a);
  printf("Enter the Dividend : ");
  scanf("%d",&b);
  printf("The Remainder when %d is divided by %d is %d",a,b,a%b);
  return 0;

}