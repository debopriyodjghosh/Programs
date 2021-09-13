#include<stdio.h>
#include<conio.h> 
 void main()
 {
	 int n,r,bnc,i,rn;
	 
	 printf("enter the number");
	 scanf("%d",&rn);
	 for(n=0;n<=rn;n++)
	 {
		 for(i=2*(rn-n);i>0;i--)
			 printf(" ");
			 bnc=1;
			 for(r=0;r<=n;r++)
			 {
				 if(r==0 || n==0)
					 bnc=1;
				 else
					 bnc=bnc*(n-r+1)/r;
				 printf("%4d",bnc);
			 }
			 printf("\n");
	 }
	 getch();
 }