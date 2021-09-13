/* SIMPSON'S 1/3 RULE */
#include<stdio.h>
#include<conio.h>
#include<math.h>
    struct term
    {
    float x,y;
    };
float f (float);
void main(void)
{
struct term val[25];
float s,k,a,b,h;
int n,i;
fflush(stdin);
printf("\n\nEnter the value of N (sub intervals):");
scanf("%d",&n);
printf("\n\nenter the lower limit\t and upper limit\t");
scanf("%f%f",&a,&b);
if(n%2)
    n--;
h=((b-a)/n);
printf("\n\nthe iteration table is as follows->\n\n");
printf("\t\tX\t\t\t\tY");
for(i=0;i<=n;i++)
{
val[i].x=a+i*h;
val[i].y=f(val[i].x);
printf("\n\n\t\t%f\t\t\t\t%f",val[i].x,val[i].y);
}
s=val[0].y+val[n].y;
for(i=1;i<n;i++)
{
    if(n%2)
        s=s+(4*val[i].y);
    else
        s=s+(2*val[i].y);
}
s=s*(h/3);
printf("\n-------------------------------");
printf("\n\nthe answer is;%f",s);
getch();
}
float f(float x)
{
    return(exp(-1*pow(x,2)));
}
