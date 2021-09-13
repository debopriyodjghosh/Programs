#include<iostream>
#include<string.h>
using namespace std;
char * remove_comments(char *);
main()
{
	char * p = "/* Test program */\n"
	        "int main() \n"
	        "{\n"
	        "//variable declaration\n"
	        "int a,b,c;\n"
	        "/*this is a test\n"
	        "multi line \n"
	        "comment for testing */\n"
	        "a=b+c;\n"
	        "}\n";
	cout<<"given program \n";
	cout<<p<<"\n";
	cout<<"modified program\n";
	cout<<remove_comments(p);
	        
}
char * remove_comments(char *p)
{
   int n=strlen(p);
   char *res;
   res=new char[n+1];
   int s=0,c=0,j=0;
   for(int i=0;i<n;i++)
   {
   	    if(s==1 && p[i]=='\n')
		  s=0;
	    else if(c==1 && p[i]=='*' && p[i+1]=='/')
		{
			c=0;
			i++;
		}  
		else if(s || c) 
		    continue;
		else if(p[i]=='/' && p[i+1]=='/')
		  {
		  	s=1;
		  	i++;
		  }
		else if(p[i]=='/' && p[i+1]=='*')
		{
			c=1;
			i++;
		}
		else
		{   
		    res[j++]=p[i];
		}
	}
	res[j]='\0';	
	return res;
}
