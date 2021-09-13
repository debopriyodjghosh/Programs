/* print_args.c: Echo command line arguments */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char *argv[])
{
	int i = 0 ;
	int num_args ;

	num_args = argc ;

	while( num_args > 0)
	{
		printf("%s\n", argv[i]);
		i++ ;
		num_args--;
	}
	return 0;
}


