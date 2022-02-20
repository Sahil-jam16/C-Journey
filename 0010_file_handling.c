#include<stdio.h>
#include<stdlib.h>
#define clrscr();
int main()
{
    //system("cls");
    int num;
    FILE *fp;
    fp=fopen("One.txt","w+");
    if(fp==NULL)
    {
        printf("ERROR!!");
        exit(1);
    }
    printf("Enter the num : ");
    scanf("%d",&num);

    fprintf(fp,"%d",num);
    fclose(fp);

    return 0;

}