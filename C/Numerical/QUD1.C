/* roots of a quratic equation*/
# include<Stdio.h>
# include <Conio.h>
# include <Math.h>
void main()
{
int a,b,c;
float x1,x2,p,q;
clrscr();
printf ("enter a,b,c \n");
scanf ("%d%d%d",&a,&b,&c);
p=b*b-4*a*c;
if(p==0)
{
x1=-b/(2*a);
x2=-b/(2*a);
printf ("The roots are equal \nx1=%f,x2=%f",x1,x2);
}
else
{
if (p> 0)
{
q=sqrt(p);
x1=(-b+q)/(2*a);
x2=(-b-q)/(2*a);
printf ("The roots are unequal \nx1=%f,x2=%f",x1,x2);
}
else
{
printf ("The roots  are imagenary");
}
}
getch();
}














