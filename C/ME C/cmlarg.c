#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fs,*ft;
    char ch;
    if(argc !=3)
    {
        puts(" improper number of arguments ");
        exit(0);
    }
    fs=fopen(argv[1],"r");
    if(fs==NULL)
    {
        puts("cannot open the source file ");
        exit(0);
    }
    ft=fopen(argv[2],"w");
     if(ft==NULL)
    {
        puts("cannot open the target file ");
        fclose(fs);
        exit(0);
    }
    while(1)
    {
        ch =fgetc(fs);
        if(ch==EOF)
        break;
        else
            fputc(ch,ft);
    }
    fclose(fs);
    fclose(ft);
    printf("\n file copied successfully");
   return 0;
    getch();


}
