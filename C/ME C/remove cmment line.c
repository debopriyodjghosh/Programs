#include<stdio.h>
int main()
{
    int nol=0,nos=0,noc=0;
    char c;
    FILE *p;
     p=fopen("d:\\dj.txt","r");
    while(1)
    {
        c=fgetc(p);
        if(c==EOF)
            break;
            noc++;
        if(c==' ')
            nos++;
        if(c=='\n')
            nol++;
    }
    fclose(p);
    printf("\n Number of characters : %d ",noc);
       printf("\n Number of spaces : %d ",nos);
          printf("\n Number of lines : %d ",nol);
          return 0;
}
