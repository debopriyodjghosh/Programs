/* print the pascal triangle*/
#include<stdio.h>

#include<math.h>
int main()
{
int i,j,k,n;

printf("\n Enter no of rows");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
    for (j = 1; j <= n - i; j++)
        printf("");
    for (k = 1; k <= i; k++)
        printf("*");
    printf("\n");
}
}