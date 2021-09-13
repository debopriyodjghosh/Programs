	#include<stdio.h>
#include<string.h>
main()
{
    char str[100],p[20],r[20],new[100];
    int i=0,j=0,k,x=0,n=0,y=0;

    printf("\nEnter the string :\n");
    gets(str);
    printf("\n Replace what : ");
    gets(p);
    printf("\nReplace with : ");
    gets(r);

    while(str[i]!='\0')
    {
        k=i;
        j=0;
        while(str[k]==p[j]&&p[j]!='\0')
        {
            k++;
            j++;
        }
        if(p[j]=='\0')
        {
            x=k;
            while(r[y]!='\0')
            {
                new[n]=r[y];
                y++;
                n++;
            }

        }
        new[n]=str[x];
        i++;
        x++;
        n++;
    }
    new[n]='\0';
    printf("\nNew string is : ");
    puts(new);
}
