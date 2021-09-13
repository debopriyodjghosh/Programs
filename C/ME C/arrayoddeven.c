/* Write a program in C to accept an array A with n elements and seperate in into two different arrays B and C such that B contains odd numbers and C contains even numbers. For example, if A={3,2,4,2,5,7,8} then B={3,5,7} and C={2,4,2,8} */

#include  <stdio.h>
#include  <conio.h>

void main()
{
  int  i , n , n1 , n2 ;
  int  A[50] , B[50] , C[50] ;

  clrscr() ;

  printf("Enter the number of elements: ") ;
  scanf("%d" , &n) ;
  printf("Enter the elements: \n") ;
  for(i=0 ; i<n ; i++)
    scanf("%d" , &A[i]) ;

  n1 = 0;  n2 = 0 ;
  for(i=0 ; i<n ; i++)
  {
	if(A[i] % 2 == 1)
	  B[n1++] = A[i] ;
	else
	  C[n2++] = A[i] ;
  }

  printf("Odd elements are as shown: \n") ;
  for(i=0 ; i<n1 ; i++)
    printf("%d " , B[i]) ;

  printf("\nEven elements are as shown: \n") ;
  for(i=0 ; i<n2 ; i++)
    printf("%d " , C[i]) ;

  getch() ;
}

/*
Output:

Enter the number of elements: 9
Enter the elements: 
2 5 6 8 7 5 2 9 4
Odd elements are as shown: 
5 7 5 9 
Even elements are as shown: 
2 6 8 2 4 

*/



