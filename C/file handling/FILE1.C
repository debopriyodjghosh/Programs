#include<stdio.h>
void main()
{
FILE *f1;
char c;
clrscr();
printf("data input\n\n");
f1=fopen("grade.c","w");
while((c=getchar())!=EOF)
putc(c,f1);
fclose(f1);
printf("\n data output\n\n");
f1=fopen("grade.c","r");
while((c=getc(f1))!=EOF)
printf("%c",c);
fclose(f1);
getch();
}