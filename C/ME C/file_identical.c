#include<stdio.h>

int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch1,ch2;
	int flag=0;
	fp1=fopen(argv[1],"r");
	fp2=fopen(argv[2],"r");
	ch1=fgetc(fp1);
	ch2=fgetc(fp2);
	while(ch1!=EOF&&ch2!=EOF)
	{
		if(ch1==ch2)
		{
			ch1=fgetc(fp1);
			ch2=fgetc(fp2);
		}
		else
			{
				flag=1;
				break;
			}
	}
	if(flag==0)
		printf("files are identical");
	else
		printf("files are not identical");
	fclose(fp1);
	fclose(fp2);
	return 0;
}

