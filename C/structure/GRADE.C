	/*find grade of students using structure*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
char name[30];
int m1,m2,m3;
float per;
char gd;
};


int main()
{
struct student x,y;

printf("\n enter name and three subject marks of student=");
gets(x.name);
scanf("%d%d%d",&x.m1,&x.m2,&x.m3);
x.per=(x.m1+x.m2+x.m3)/3;
if(x.per<=33)
x.gd='D';
else if(x.per<=45)
x.gd='C';
else if(x.per<=59)
x.gd='B';
else
x.gd='A';
printf("\n records of students=");
printf("\n name=");
puts(x.name);
printf("\n marks=%d\t%d\t%d",x.m1,x.m2,x.m3);
printf("\n percentage=%f",x.per);
printf("\n grade is=%c",x.gd);

fflush(stdin);
printf("\n enter name and three subject marks of student=");
gets(y.name);
scanf("%d%d%d",&y.m1,&y.m2,&y.m3);
y.per=(y.m1+y.m2+y.m3)/3;
if(y.per<=33)
y.gd='D';
else if(y.per<=45)
y.gd='C';
else if(y.per<=59)
y.gd='B';
else
y.gd='A';
printf("\n records of students=");
printf("\n name=");
puts(y.name);
printf("\n marks=%d\t%d\t%d",y.m1,y.m2,y.m3);
printf("\n percentage=%f",y.per);
printf("\n grade is=%c",y.gd);
getch();
}
