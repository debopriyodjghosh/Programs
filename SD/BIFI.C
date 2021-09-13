

#include<stdio.h>
#include<conio.h>

struct std
{
char name[30];
int roll;
int marks;
};

void main()
{
FILE *fp;
struct std x;
char ch='y';

fp=fopen("c:/file1.txt","wb");
clrscr();
while(ch=='y'||ch=='Y')
{
printf("Enter name,roll,marks\n");
fflush(stdin);
scanf("%s%d%d",x.name,&x.roll,&x.marks);
fwrite(&x,sizeof(x),1,fp);
printf("do u want to continue y/n");
fflush(stdin);
scanf("%c",&ch);
}
fclose(fp);
fp=fopen("c:/file1.txt","rb");
while((fread(&x,sizeof(x),1,fp))==1)
{
printf("%s  %d  %d\n\n",x.name,x.roll,x.marks);
}
fclose(fp);
getch();
}
