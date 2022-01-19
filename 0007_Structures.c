#include<stdio.h>
#include<conio.h>
#include<string.h>
#define clrscr();
main()
{
    struct student{
        int rno;
        char name[15];
        int std;
        }a,b;     // Defining the struct members in the tag itself.
    system("cls");    
    struct student c,d,e;   //Defining Seperately. 
    printf("Enter the Roll No : ");
    scanf("%d",&a.rno);
    printf("%d",a.rno);  
    printf("\nEnter the Roll No, Name, Standard of the student : ");
    scanf("%d\t%[^\n]\t%d",&e.rno,&e.name,&e.std);
    printf("\tName : %15s\n\tRoll No : %5d\n\tStandard : %3d\n",e.name,e.rno,e.std);
    
}