#include<stdio.h>
#include<conio.h>
#include<string.h>
void baseconv(char s[20],int,int);
main()
{
    char s[20];
int base1,base2;
printf("\nEnter the number and base : ");
scanf("%s %d",s,&base1);
printf("\n enter the base to be converted : ");
scanf("%d",&base2);
baseconv(s,base1,base2);
}

void baseconv(char s[20],int b1,int b2)
{
int count=0,r,digit,i,n=0,b=1;
    for(i=strlen(s)-1;i>=0;i--)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            digit=s[i]-'0'-7;
        }
        else
        {
            digit=s[i]-'0';
        }
        n=digit*b+n;
        b=b*b1;
    }
    while(n!=0)
    {
        r=n%b2;
        digit='0'+r;
        if(digit>'9')
        {
            digit+=7;
        }
        s[count]=digit;
        count++;
        n=n/b2;
    }
printf("\n the converted output is : ");
    for(i=count-1;i>=0;i--)
    {
printf("%c",s[i]);
    }
printf("\n");
}
