#include<stdio.h>
#include<string.h>
main()
{
    FILE *p,*q;
    char s[100];
    int n=0;
    p= fopen("f:\\a.txt","r");
    q=fopen("f:\\b.txt","w");
      fgets(s,100,p);
    while(!feof(p))
    {
       n=strlen(s);
        if(n>=15)
    {
        fputs(s,q);
fputs("\n",q);
    }
      fgets(s,100,p);
    }
    fclose(p);
    fclose(q);
    printf("\nfile copied\n");
}
