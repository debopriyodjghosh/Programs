#include<stdio.h>
#include<conio.h>
struct marks
{
 float marks1;
 float marks2;
 float marks3;
};
typedef struct student
{
 char name[30];
 int roll;
 struct marks m;
}node;
void main()
{
  node x;
  float m1,m2,m3;
  clrscr();
  printf("\n\n\t\tEnter name:");
  gets(x.name);
  printf("\n\n\t\tEnter roll:");
  scanf("%d",&x.roll);
  printf("\n\n\t\tEnter marks1:");
  scanf("%f",&m1);
  printf("\n\n\t\tEnter marks2:");
  scanf("%f",&m2);
  printf("\n\n\t\tEnter marks3:");
  scanf("%f",&m3);
  x.m.marks1=m1;
  x.m.marks2=m2;
  x.m.marks3=m3;
  printf("\n\n\t\tName is:");
  puts(x.name);
  printf("\n\n\t\tRoll is:%d",x.roll);
  printf("\n\n\t\tMarks1 is:%f",x.m.marks1);
  printf("\n\n\t\tMarks2 is:%f",x.m.marks2);
  printf("\n\n\t\tMarks3 is:%f",x.m.marks3);
getch();
}
