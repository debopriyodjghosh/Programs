#include<stdio.h>
#include<conio.h>
void main()
{
int x[100],n,i,j,v,f=0;
clrscr();
printf("how many elements=");
scanf("%d",&n);
printf("\n enter the element=");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}
printf("\n enter value to be deleted=");
scanf("%d",&v);
for(i=0;i<n;i++)
{
if(x[i]==v)
{
f=1;
for(j=i;j<n-1;j++)
{
x[j]=x[j+1];
}
n--;
break;
}
}

if(f==1)
{
printf("\n value deleted remaing value of array are=\n");
for(i=0;i<n;i++)
{
printf("%d\n",x[i]);
}
}
else
printf("\n value does not exist");
getch();
}