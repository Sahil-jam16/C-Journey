#include<stdio.h>
#include<string.h>
#include<conio.h>
#define clrscr();
struct product
{
    int  pcode;
    char pname[15];
    float  price;
    int  quantity;
};

main()
{
      
int n;
//system("cls");
printf("Enter the no of products : ");
scanf("%d",&n);
struct product pro[n];

for( int i=1 ; i<=n ; i++)
{
    printf("\nEnter the code of product %d : ",i);
    scanf("%d",&pro[i].pcode);
    printf("\nEnter the Name of product %d : ",i);
    scanf(" %s",&pro[i].pname);
    printf("\nEnter the Price of Product %d : ",i);
    scanf("%f",&pro[i].price);
    printf("\nEnter the quantity of Product %d :",i);
    scanf("%d",&pro[i].quantity);
}
float bill=0;
printf("\n\t\t\tBILL SCRIPT\n\n");
printf("S.no\tName\t\tPrice\t\tQuantity\t\t\n\n");
for( int j=1 ; j<=n ; j++ )
{
    printf("%2d\t%-15s\t%-5.2f\t\t%-2d\n\n",pro[j].pcode,pro[j].pname,pro[j].price,pro[j].quantity);
    bill=bill+(pro[j].quantity*pro[j].price);   
}
printf("\n\tTOTAL AMOUNT TO BE PAID : %5.2f\n\n",bill);

return 0;
}