/* cat2.c: Prompt user for filename and display file on screen */

#include <stdio.h>

int main() 
{ 
	FILE *fopen(), *fp; 
	int c ; 
	char filename[40] ;

	printf("Enter file to be displayed: ");
	gets( filename ) ;

	fp = fopen( filename, "r");  
 
	c = getc( fp ) ; 		 

	while (  c != EOF ) 
	{
		putchar(c); 		
		c = getc ( fp ); 	
	}

	fclose( fp ); 
	return 0;
}

