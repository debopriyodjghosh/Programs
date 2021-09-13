#include<stdio.h>
main()
{
    FILE *p,*q;
    static char s[100];
    int i,j,n,k;
    p= fopen("f:\\a.txt","r");
    q=fopen("f:\\b.txt","w");
     fgets(s,100,p);
    while(!feof(p))
    {
     n=strlen(s);
    for(i=0;i<n-1;i++)
    {
     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    {
        j=i+1;
        if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
        {
            for(k=i;k<n-1;k++)
            {
                s[k]=s[k+2];
            }
     printf("%s",s);

        }

    }
     }
     fputs(s,q);

     fgets(s,100,p);
    }
    fclose(p);
    fclose(p);
    printf("file copied except twice occuerd vowel");
}
