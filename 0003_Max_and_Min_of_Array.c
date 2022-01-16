#include <stdio.h>

int main() {
	int t,n,a[50],i,j,k,max,min;
	scanf("%d",&t);
	for( i=1 ; i<=t ; i++)
    {
        scanf("%d",&n);
        for( j=0 ; j<=n-1 ; j++)
        {
            scanf("%d",&a[j]);
        }
        max=min=a[0];
            for( j=0 ; j<n ; j++ )
            {
                if( a[j]<min) 
                 min=a[j];
                if( a[j]>max )
                  max=a[j];
            }
            printf("%d %d\n",max,min);
        
        
    }    

	return 0;
}
    
    
	