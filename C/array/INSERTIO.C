	/*insertion sort*/

#include<stdio.h>
#include<conio.h>
void main()
{
int x[100],n,i,j,value;
clrscr();
printf("how many elements in array=");
scanf("%d",&n);
printf("\nenter the value of array=");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}

for(i=1;i<=n-1;i++)
{
value=x[i];
for(j=i-1;j>=0;j--)
{
if(x[j]>value)
{
x[j+1]=x[j];
}
else
{
break;
}
}
x[j+1]=value;
}
printf("array after shorting are=");
for(i=0;i<n;i++)
{
printf("\n%d",x[i]);
}
getch();
}