#include<stdio.h>
#include<string.h>
main()
{
    char s[500],t[200];
    int i=0,j=1,k;
    printf("\n enter the name : ");
    gets(s);
    t[0]=s[0];
    t[1]='.';
    j=2;
for(i=0;s[i]!='\0';i++)
{
    if(s[i]==' ')
    {
        k=i;
        i++;
        t[j]=s[i];
        j++;
        t[j]='.';
        j++;
    }
}
j=j-2;
while(s[k]!='\0')
{
    t[j]=s[k];
    k++;j++;
}
    t[j]='\0';
    puts(t);
}
