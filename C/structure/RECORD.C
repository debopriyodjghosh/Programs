	/*records of students using structure*/

#include<stdio.h>
#include<conio.h>
struct student
{
int rn;
char name[30];
int per;
};
void main()
{
struct student x[100];
int n,i,f,roll;
clrscr();
printf("enter no. of students=");
scanf("%d",&n);
printf("\n enter rn,name,per of student");
for(i=0;i<n;i++)
{
printf("\nroll number  is=");
scanf("%d",&x[i].rn);
printf("name is=");
scanf("%s",&x[i].name);
printf("percentage is=");
scanf("%d",&x[i].per);
printf("-------------------");
}
f=0;
printf("\nenter any roll number for search in records=");
scanf("%d",&roll);
for(i=0;i<n;i++)
{

if(roll==x[i].rn)
{
f=1;
printf("\nname is=%s",x[i].name);
printf("\n percentage=%d",x[i].per);
break;
}
}
if(f==0)
printf("\n roll number dosnt exist in our records");
getch();
}