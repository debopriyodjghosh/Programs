#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int nol=0,nos=0,noc=0;
    char c;
    FILE *p;
    if(argc!=2)
        printf("\n improper number of argument ");
     p=fopen(argv[1],"r");
    if(argv[1]==NULL)
    {
        puts("\n Cannot open the file ");
        getch();
        exit(0);
    }
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
       printf("\n Number of words : %d ",nos+1);
          printf("\n Number of lines : %d ",nol);
          return 0;
}
