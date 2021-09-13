/* twin primes */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int primecheak(int);
void main()
{
  int n,p,m,i;
  clrscr();
  printf("Enter the no:");
  scanf("%d",&n);
  for(i=1;1<=n;i++)
  {
    p=primecheak(n);
     if(i==1)
      m=i+2;
      p=primecheak(1);
       if(m==1)
       {
         printf("\n Twin prime");
       }
       else
        printf("Not twin prime");
  }
  getch();
}
int primecheak(int q)
{
  int j,N;
  printf("\n Enter the no:");
  scanf("%d", &N);
  for(j=2;j<sqrt(N);j++)
  {
   if(N%j==0)
    return(0);
  }
  return(1);
}
