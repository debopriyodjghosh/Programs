void main()
{
char st[100];
int n,i,j,f=0;
clrscr();
printf("enter any string=");
gets(st);
n=strlen(st);
i=0;
j=n-1;
while(i<j)
{
if(st[i]==st[j])
{
f=1;
break;
}
i++;
j--;
}
if(f==1)
printf("\n string in palindrome");
else
printf("\n not palindrome");
getch();
}