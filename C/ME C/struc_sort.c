#include<stdio.h>
#include<conio.h>
#include<string.h>


int main()
{
 	typedef struct book
 	{
	 	   char name[10];
	 	   char auth[10];
	 	   char pub[10];
    }book;
    book b[50],t;
    int n,j,i,p;
    printf("enter the no. of books :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
	 				printf("enter name :");
	 				fflush(stdin);
	 				gets(b[i].name);
	 				
	 				printf("enter auth :");
	 				fflush(stdin);
	 				gets(b[i].auth);
	 				
	 				printf("enter pub :");
	 				fflush(stdin);
	 				gets(b[i].pub);
    }
    for(i=0;i<n;i++)
    {
	 				printf("\nbook %d",i+1);
	 				printf("name=%s  ",b[i].name);
	 				printf("auth=%s  ",b[i].auth);
	 				printf("pub=%s  ",b[i].pub);
	}
     for(i=1;i<n;i++)
	{
	 				 
					 for(j=0;j<n-i;j++)
					 {
					  				  if(strcmp(b[j].auth,b[j+1].auth)>0)
										{
										  t=b[j];
					                      b[j]=b[j+1];
					                      b[j+1]=t;	
										    	
												
									    }
	                 }
					
    }  

    printf("\n"); 
    for(i=0;i<n;i++)
    {
	 				printf("\nbook %d  ",i+1);
	 				printf("name=%s  ",b[i].name);
	 				printf("auth=%s  ",b[i].auth);
	 				printf("pub=%s  ",b[i].pub);
	}
	getch();
	return 0;
}
	 				
	 				
