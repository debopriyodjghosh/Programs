#include<stdio.h>
void count(char s[100])
{
    char i;
    int c,j;
    for(i=97;i<122;i++)
    {
        c=0;
        for(j=0;s[j]!='\0';j++)
        {
            if(i==s[j])
                c++;
        }
        if(c!=0)
            printf("\n%c = %d",i,c);
    }
}

main()
{
    char s[100];
    printf("\n Enter the string of which the frequency is counted : \n");
    gets(s);
    count(s);
}

