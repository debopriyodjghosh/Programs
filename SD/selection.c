#include <stdio.h>
main()
{
		  int A[20], N, Temp, i, j;
		  printf("\n ENTER THE NUMBER OF TERMS...: ");
		  scanf("%d",&N);
		  printf("\nENTER THE ELEMENTS OF THE ARRAY...:");
		  for(i=1; i<=N; i++)
		  {
					 scanf("\n\t\t%d", &A[i]);
		  }
		  for(i=1; i<=N-1; i++)
					 for(j=i+1; j<=N;j++)
								if(A[i]>A[j])
								{
										  Temp = A[i];
										  A[i] = A[j];
										  A[j] = Temp;
								}
		  printf("\n\tTHE ASCENDING ORDER LIST IS BY SELECTION SORT...:\n");
		  for(i=1; i<=N; i++)
					 printf("\n\t\t\t%d",A[i]);

getch();
					 
}
