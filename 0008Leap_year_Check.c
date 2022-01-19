#include<stdio.h>
#include<conio.h>
#define clrscr();
main()
{
    int year;
    system("cls");
    printf("Enter the leap year : ");
    scanf("%d",&year);
    
    if( year<1000)
     printf("Please enter a valid year.\n");
    else if( year%4==0 && ( year%400==0 || year%100!=0) )
     printf("Its a leap Year!!!");
    else 
    printf("Its not a leap year"); 

}