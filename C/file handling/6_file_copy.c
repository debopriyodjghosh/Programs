/* filecopy.c : Copy prog.c to prog.old */ 

#include <stdio.h>
int main()  
{
	FILE *fp1, *fp2, *fopen(); 
	int c ; 

	fp1 = fopen( "1_prog.c",  "r" );       /* open for reading */ 
	fp2 = fopen( "copy_prog.old", "w" ) ; /* open for writing */	

	if ( fp1 == NULL )      /* check does file exist etc */ 
	{ 
		printf("Cannot open prog.c for reading \n" ); 
		exit(1);    /* terminate program */ 
	} 
	else if ( fp2 == NULL ) 
	{ 
		printf("Cannot open prog.old for writing \n"); 
		exit(1);    /* terminate program */ 
	} 
	else 		/* both files O.K. */
	{
		c = getc(fp1) ;		 
		while ( c != EOF) 
		{ 
			putc( c,  fp2);    /* copy to prog.old */ 
			c =  getc( fp1 ) ;
		} 

	fclose ( fp1 ); 		/* Now close files */
	fclose ( fp2 ); 
	printf("Files successfully copied \n");
	} 
	return 0;
}

