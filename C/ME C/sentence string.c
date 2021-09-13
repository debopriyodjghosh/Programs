#include<stdio.h>
void lower(char x[100])
{
int i;
for(i=0;x[i]!='\0';i++)
{
if(x[i]>=65 && x[i]<=90)
x[i]=x[i]+32;
}
}
main()
{
int i,vc=0,cc=0,sc=0,d=0,k=0;
char s[100];
printf("\n enter sentence: ");
scanf("%[^\n]",s);
lower(s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
{
vc++;
}
else if(s[i]==' ')
{
sc++;
}
else if(s[i]>=97 && s[i]<=122)
{
cc++;
}
else if(s[i]>=48 && s[i]<=56)
{
d++;
}
else
{
k++;
}
}
printf("\n vowels=%d cons=%d space=%d digits=%d other=%d",vc,cc,sc,d,k);
}
