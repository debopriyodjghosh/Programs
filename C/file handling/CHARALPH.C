	/*file handling of upper case,lower case,digit and spcial symbole*/

#include<stdio.h>
void main()
{
char st[100];
FILE *a,*b,*c,*d;
int i,l;
clrscr();
a=fopen("up.txt","w");
b=fopen("lw.txt","w");
c=fopen("dg.txt","w");
d=fopen("sp.txt","w");
printf("enter any string\n\n");
gets(st);
l=strlen(st);
for(i=0;i<l;i++)
{
if(st[i]>='A'&&st[i]<='Z')
putc(st[i],a);
else if(st[i]>='a'&&st[i]<='z')
putc(st[i],b);
else if(st[i]>='0'&&st[i]<='9')
putc(st[i],c);
else
putc(st[i],d);
}
fclose(a);
fclose(b);
fclose(c);
fclose(d);
getch();
}

