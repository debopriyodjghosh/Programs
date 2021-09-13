	/*reverse of string*/

#include<iostream.h>
#include<conio.h>
int main()
{
char st[100],ch;
int n,i,j;
clrscr();
cout<<"enter any string=";
gets(st);
n=0;
while(st[n]!='\0')
{
n++;
}
i=0;
j=n-1;
while(i<j)
{
ch=st[i];
st[i]=st[j];
st[j]=ch;
i++;
j--;
}
cout<<"reverse is="<<st;
//puts(st);
getch();
return 0;
}