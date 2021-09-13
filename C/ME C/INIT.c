#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char nam[50];
 int i,j;

 printf("\nEnter the name:");
 gets(nam);

 for(i=0;nam[i]!='\0';i++)
 {
   if(i==0)
    { printf("%c. ",nam[i]);
      continue;
     }
     if(nam[i]==' ')
     {

       for(j=i+1;nam[j]!=' '&&nam[j]!='\0';j++);
       if(nam[j]==' ')
	 {
	   printf("%c. ",nam[i+1]);

	   continue;
	 }
       else
	 {
	   for(j=i+1;nam[j]!='\0';j++)
	   printf("%c",nam[j]);
	   break;
	  }
     }
 }

 getch();
}
