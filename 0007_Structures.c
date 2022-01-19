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
    struct student c ={ 1001,"KABIR",12 },
                   d ={ 1002,"ROSHAN",12}, //Assignning the values directly.
                   e;   //Defining Seperately. 
   
   // printf("Enter the Roll No : ");
    //scanf("%d",&a.rno);
    //printf("%d",a.rno);  
   
    printf("\nEnter the Roll No, Name, Standard of the student : ");
    scanf("%d\t%[^\n]\t%d",&e.rno,&e.name,&e.std);
    printf("\tName : %15s\n\tRoll No : %5d\n\tStandard : %3d\n",e.name,e.rno,e.std);
   
    printf("%d\n%s\n%d\n",c.rno,c.name,c.std);
    
    e=d;

    printf("After assignning , The values of E Struct : %d\n%s\n%d",e.rno,e.name,e.std); // Assigned Struct from the existing struct.
}