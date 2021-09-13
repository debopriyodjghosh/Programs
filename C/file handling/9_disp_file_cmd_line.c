/* cat1.c: Display files specified as command line parameters */

#include <stdio.h> 
#include <stdlib.h>

int main(int argc,  char *argv[])
{
        int i  = 1 ;
        int c ;
        int num_args = 0 ;
        FILE *fp;

        if ( argc == 1 )
        {
          fprintf(stderr, "No input files\nUsage: % cat file…\n");
          exit(1);
        }

        if ( argc > 1 )
                printf("%d files to be displayed\n", argc-1);

        num_args = argc - 1;

        while( num_args > 0)
        {
             printf("[Displaying file %s]\n", argv[i]);
             num_args--;
             fp = fopen( argv[i], "r" ) ;
             if ( fp == NULL )
             {
                 fprintf(stderr,"Cannot display %s \n", argv[i]);
                 continue; /* Goto next file in list */
             }

             c = getc(fp) ;
             while ( c != EOF )
             {
                     putchar( c );
                     c = getc( fp );
             }
             fclose( fp );
             printf("\n[End of %s]\n--------------\n\n", argv[i]);
             i++;
       }
	return 0;
}

