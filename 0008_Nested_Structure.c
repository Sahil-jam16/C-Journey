#include<stdio.h>
#include<conio.h>
#define clrscr();
main()
{
   system("cls");
   struct point{
       int x;
       int y;
   };
    struct line{
        int a;
        struct point b;
    }one={ .a=10 ,.b.x=50, .b.y=80};//={ 10, 50, 80 };   // Different ways of accessing nested structure.

 //   struct line one={ .a=10 ,.b.x=50, .b.y=80};
    printf("Example of Nested Structure :\n");
    printf("Line - %d ,\nPoint - %d , %d ",one.a,one.b.x,one.b.y);


}