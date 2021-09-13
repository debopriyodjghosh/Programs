#include<stdio.h>
#include<conio.h>
#include<dos.h>
getkey();
void main()
{
  int n;
  clrscr();
  printf("\n\n\t\tHit any arrow key:");
  n=getkey();
  printf("%d",n);
  getch();
}
getkey()
{
  union REGS i,o;
  while(!kbhit())
  ;
  i.h.ah=0;
  int86(22,&i,&o);
  return(o.h.ah);
}