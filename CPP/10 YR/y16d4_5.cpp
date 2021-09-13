#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	const int max=80;
	char buff[max];
	int flag=0;
	ofstream out1("int.txt");
	ofstream out2("float.txt");
	ifstream in("intfloat.txt");
	while(!in.eof())
	{
		flag=0;
		in.getline(buff,max);
		cout<<buff[0]<<endl;
		for(int i=0;i<strlen(buff);i++)
		{
			if(buff[i]=='.')
			{
				out2<<buff<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)
		out1<<buff<<endl;
	}
	return 0;
}
