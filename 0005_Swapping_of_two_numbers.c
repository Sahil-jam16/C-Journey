#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter the Two numbers to be swapped : ");
    scanf("%d\n%d",&n1,&n2);
    printf("The numbers before swapping : A = %d\tB = %d\n",n1,n2);
    temp=n1;
    n1=n2;
    n2=temp;
    printf("The numbers after swapping : A = %d\tB = %d",n1,n2);
    return 0;
}