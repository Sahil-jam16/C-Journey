#include<stdio.h>
#include<conio.h>
#define clrscr();
main()
{
    int n,i;
    system("cls");
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for( i=1 ; i<=n ; i++ )
        printf("%5d",i);
    getch();
}