#include<stdio.h>
#include<stdlib.h>

struct emp
{
  int empno;
  char ename[20];
  int sal;
};
typedef struct emp emp;

 main()
{
	 emp e,t;
	 int n,i,j,z;
	 FILE *p;
	 p=fopen("a112.dat","a+");
	 printf("\n How many rec?");
	 scanf("%d",&n);

	 for(i=0;i<n;i++)
	 {
	 printf("\n enter empno, ename, sal ? ");
	 scanf("%d %s %d",&e.empno,e.ename,&e.sal);
	 fwrite(&e,sizeof(emp),1,p);
	 }

	 rewind(p);
	 while(fread(&e,sizeof(emp),1,p)==1)
	 {
		 printf("\n Empno : %d  Ename : %s  Salary : %d",e.empno,e.ename,e.sal);
	 }
	 /**************************/
	 printf("\n Enter record no :");
	 scanf("%d",&z);
	 rewind(p);
	 fseek(p,(z-1)*sizeof(emp),SEEK_SET);
	 fread(&e,sizeof(emp),1,p);
	 printf("\n Empno : %d  Ename : %s Salary : %d",e.empno,e.ename,e.sal);
	 fclose(p);
}
