#include<stdio.h>
#include<stdlib.h>


struct emp
{
    int eno;
    char ename[10];
    int sal;
};
typedef struct emp emp;
 main()
{
   FILE *p;
   int i,j,k,n;
   emp e;
   p=fopen("a.dat","a+");
    printf("\n how many no of record?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
       printf("enter eno ,ename, salary: ");
       scanf("%d %s %d",&e.eno,e.ename,&e.sal);
       fwrite(&e,sizeof(emp),1,p);
   }
   rewind(p);
   while(fread(&e,sizeof(emp),1,p)==1)
    {
       printf("\n eno %d ename %s esal %d",e.eno,e.ename,e.sal);
    }


    fclose(p);
}
