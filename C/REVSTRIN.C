//#include<stdio.h>
//#include<conio.h>
void main()
{
char st[100],ch;
int n,i,j;
clrscr();
printf("enter any string=");
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
printf("reverse is=%s",st);
//puts(st);
getch();
}