#include<stdio.h>
#include<conio.h>
int main()
{ int a,p,q,rslt=0;
printf("Enter two numbers: ");
scanf("%d%d",&p,&q);
if(p%2!=0)
rslt=rslt+q;
   printf("\n p=%d  q=%d",p,q);
  while(p!=1)
  { p=p/2;
  q=q*2;
  /* when no struck off happen */
  if(p%2!=0)
  rslt=rslt+q;
  printf("\n p=%d  q=%d",p,q);
  }
  printf("\n\nanswer= %d ",rslt); 
  getch();
  return 0;
}
