/* file.c: Display contents of a file on screen */ 

#include <stdio.h>

int main() 
{ 
	FILE *fopen(), *fp; 
	int c ; 

	fp = fopen( "1_prog.c", "r" ); 
	c = getc( fp ) ; 		
	while (  c != EOF ) 
	{
		putchar( c ); 		
		c = getc ( fp ); 	 
	}

	fclose( fp ); 
	return 0;
}


