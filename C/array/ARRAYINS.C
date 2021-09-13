	/*insertion in array*/

#include<stdio.h>
#include<conio.h>
int main()
{
int x[100],n,i,v,p;


printf("how many elements in array=");
scanf("%d",&n);

printf("\nenter the value of array=");
for(i=0;i<n;i++)
{
scanf("%d",&x[i]);
}

printf("\n enter the value you want to insert=");
scanf("%d",&v);
printf("\n enter the position where you want to insert it=");
scanf("%d",&p);

for(i=n-1;i>=p-1;i--)
{
x[i+1]=x[i];
}
x[i+1]=v;
n++;

printf("\n new array are=");
for(i=0;i<n;i++)
{
printf("\n%d",x[i]);
}
getch();
}
