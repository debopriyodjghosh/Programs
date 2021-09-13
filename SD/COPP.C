/*  */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
char ch;
FILE *fp1,*fp2;
clrscr();
if(argc!=3)
{
printf("wrong argument");
getch();
exit(0);
}

fp1=fopen(argv[1],"r");
if(fp1==NULL)
{
 printf("file not opened");
 getch();
 exit(0);
 }

 fp2=fopen(argv[2],"w");
 while((ch=fgetc(fp1))!=EOF)
 {
 fputc(ch,fp2);
 }
 fclose(fp1);
 fclose(fp2);
 printf("file copied successfully");
 getch();
 }