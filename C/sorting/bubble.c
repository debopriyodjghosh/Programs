#include<stdio.h>
 
int main()
{
  int a[20], n, i, j, temp;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
 
   /* sorting block*/
  for (i = 0 ; i < ( n - 1 ); i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (a[j] > a[j+1]) /* For decreasing order use < */
      {
        temp       = a[j];
        a[j]   = a[j+1];
        a[j+1] = temp;
      }
    }
  }
 
  printf("Sorted list in ascending order by bubble sort……………:\n");
 
  for ( i = 0 ; i < n ; i++ )
     printf("%d\n", a[i]);
 
  return 0;
}
