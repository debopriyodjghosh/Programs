#include<stdio.h>
#include<conio.h>
enum std
{
sc,st=4,gen
};

void main()
{
enum std x;
clrscr();
printf("Enter category(0.sc 4.st 5.gen) ");
scanf("%d",&x);
if (x==sc)
   printf("sc");
else if(x==st)
  printf("st");
else if(x==gen)
  printf("gen");
else
  printf("Wrong entry");
getch();
}