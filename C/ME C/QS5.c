#include <stdio.h>
#include <stdlib.h> // For exit()
 
int main()
{
    FILE *fp1, *fp2,*fp3;
    char filename[50], c,k;
    int max=15,count=0;
    printf("\n enter the file name to read : ");
    scanf("%s",filename);
    fp1 = fopen(filename, "r");
    if (fp1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
    printf("\n enter the file name to write : ");
    scanf("%s",filename);
    fp2 = fopen(filename, "w");
    c=fgetc(fp1);
    while(c!=EOF)
	{
		k=c;
		fp3 = fopen("sd.txt", "w");
		while (k != '\n')
    	{
    		fputc(k, fp3);
       		k = fgetc(fp1);
		}
		fclose(fp3);
		fp3 = fopen("sd.txt", "r");
		count=0;
		k=fgetc(fp3);
		while (k != EOF)
    	{
    		count++;
       		k = fgetc(fp3);
		}
		fclose(fp3);
		if(count>max)
			{
				fp3 = fopen("sd.txt", "r");
				k=fgetc(fp3);
				while(k!=EOF)
				{
					fputc(k, fp2);
        			k = fgetc(fp3);
				}
				fclose(fp3);
				fprintf(fp2,"\n");
			}
        c = fgetc(fp1);
	}
    printf("\nContents copied to %s",filename);
    fclose(fp1);
    fclose(fp2);
    return 0;
}

