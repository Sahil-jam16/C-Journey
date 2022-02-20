#include <stdio.h>

int main()
{
    int n,s,a[50];
    int binarysearch(int a[],int n,int s);
    printf("\nEnter the no of elements : ");
    scanf("%d",&n);
    printf("\nEnter the %d elements : ",n);
    for( int i=0; i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched from the list : ");
    scanf("%d",&s);
 
    if(binarysearch(a,n,s))
     printf("The element %d is present in the list \n",s);
    else 
     printf("The element %d is not present in the list \n",s);
     
    return 0;
}
     
int binarysearch(int a[],int n,int s)
    {
       int flag=0,start=0,end,mid;
       end=n;

       while( start<end && flag==0)
       {
            mid=(start+end)/2;
           if( a[mid]<s )
            start=mid+1;
           else
            if( a[mid]>s )
             end=mid-1;
            else
              flag=1;
       }
       
       return (flag);
    }
     
