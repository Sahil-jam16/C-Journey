#include<stdio.h>
int main()
{
    int a[]={1,2,4,3,5,6,7},sum=0;
    int *p=a;
    for( p=a ;p<&a[7];p++)
    {
        sum+=*p;
        
    }
    printf("\n\n%d is the total sum of the array \n\n",sum);
}