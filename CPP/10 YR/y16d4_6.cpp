#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{ 
	const int max=100;
	char buff[max];
	int flag;
	ifstream in("comments.txt");
	ofstream out("program11.cpp");
	while(!in.eof())
	{
		in.getline((char*)buff,100);
		flag=0;
		for(int i=0;i<strlen(buff);i++)
		{
			if(buff[i]=='/' && buff[i+1]=='/')
			{
				buff[i]='\0';
				out<<buff<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			out<<buff<<endl;
			flag=1;
		}
	}
	return 0;	
}

