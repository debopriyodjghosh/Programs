#include<stdio.h>
#include<conio.h>
#include<string.h>
struct d
	{
	char s_str[60];
	int frq;
	};
typedef struct d freq;
void main(int argc,char *argv[])
{
 FILE *fp;
 char ch;
 char m_str[400],t_str[10][60];
 freq s[10];
 int r=0,n,i,k=0,j=0,flag=0,g=0,z=0;
 fflush(stdin);
 if(argc!=2)
  {
	printf("\n\n!!!parameter missing...");
	exit();
  }
 fp=fopen(argv[1],"r+");
 if(fp==NULL)
  {
	printf("\n\nFile can not be opened...");
	exit();
  }
 while(1)
  {
	ch=fgetc(fp);
	if(ch==EOF)
	 break;
	else
	 m_str[z]=ch;
	z++;
  }
  m_str[z]='\0';
  for(i=0;i<10;i++)
	s[i].frq=0;
  n=strlen(m_str);
  for(i=0;i<n;i++)
	{
	 if(m_str[i]!=' '&& m_str[i]!=',')
	  {
		t_str[k][j]=m_str[i];
		j++;
	  }
	 else
	 {
	  t_str[k][j]='\0';
	  k++;
	  j=0;
	 }
  }
  j=0;
  for(i=0;i<=k;i++)
	{
	 for(j=0;j<g;j++)
	 {
	  r=strcmp(s[j].s_str,t_str[i]);
	  if(r==0)
		{
		 (s[j].frq)++;
		 flag=1;
		 break;
		}
	 }
	if(flag!=1)
	 {
	  strcpy(s[g].s_str,t_str[i]);
	  s[g].frq=1;
	  g++;
	  flag=0;
	 }
	flag=0;
  }
  for(i=0;i<g;i++)
	printf("\n\nThe frequency of the word '%s' is: %d",s[i].s_str,s[i].frq);
}
