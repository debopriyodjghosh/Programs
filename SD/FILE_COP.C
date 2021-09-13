//file copy using command line..
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(int argc,char *argv[])
{
 FILE *fp,*ft;
 char ch;
 fflush(stdin);
 if(argc!=3)
  {
   printf("\n\n!!!Parameter missing..");
   exit();
  }
 fp=fopen(argv[1],"r+");
 if(fp==NULL)
    printf("\n\n!!!Can not open the file..");
 else
  {
   ft=fopen(argv[2],"w+");
   while(1)
    {
     if((ch=fgetc(fp))==EOF)
       break;
     else
      fputc(ch,ft);
    }
   fclose(ft);
   printf("FILE COPIED SUCCESSFULLY...");
  }
 fclose(fp);
}