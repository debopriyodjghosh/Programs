#include<iostream>
#include<string.h>
using namespace std;
class strng
{
	private :
		        int l[2][10];
		        int count[10];
	public:
		      strng();
              void input();
			  void show();
			  void sort();
			  void appear();
			  //void maximum();
			  //void minimum();
};
strng :: strng()
{
	int i;
	for(i=0;i<10;i++)
	{
	 l[1][i]=0;
	 count[i]=0;
    }
}
void strng :: sort()
{
	int i,j,t;
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8-i;j++)
		{
			if(l[0][j]>l[0][j+1])
			{
				t=l[0][j];
				l[0][j]=l[0][j+1];
				l[0][j+1]=t;
			}
		}
	}
}
void strng :: input()
{
	/*char x[40];
	cout<<"\nInput for array of string : ";
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter string : ";
		cin>>x;
		l[i]=strlen(x);
		s[i]=new char[l[i]+1];
		strcpy(s[i],x);
	}*/
	int i;
	for(i=0;i<10;i++)
	{
		cout<<"\nEnter scores :";
		cin>>l[0][i];
	}
}
void strng :: appear()
{
	int i,j;
	for(i=0;i<10;i++)
	{
		int c=1;
		if(l[1][i]==0)
		{
			for(j=i+1;j<10;j++)
			{
				if(l[0][i]==l[0][j])
				{
					c++;
					l[1][j]=1;
				}
			}
			count[i]=c;
		}

	}
}
void strng :: show()
{
	int i;
	cout<<" \n All the score ---> : \n";
	for(i=0;i<10;i++)
	{
		cout<<"\t"<<l[0][i];
	}
	for(i=0;i<10;i++)
	{
		if(l[1][i]==0)
		{
			cout<<"\nScore "<<l[0][i]<<" appear "<<count[i]<<" times.";
		}
	}
}

/*void strng :: maximum()
{
	int max=l[0];
	int j,i;
	for(i=1;i<10;i++)
	{
		if(max<l[i])
		{
			max=l[i];
			j=i;
		}
	}
	cout<<"\n The maximum string is : "<<s[j];
	cout<<"\n its length="<<l[j];
}
void strng :: minimum()
{
	int min=l[0];
	int j,i;
	for(i=1;i<10;i++)
	{
		if(min>l[i])
		{
			min=l[i];
			j=i;
		}
	}
	cout<<"\n The minimum string is : "<<s[j];
	cout<<"\n its length="<<l[j];
}*/
main()
{
	strng ob;
	ob.input();
	ob.sort();
	ob.appear();
	ob.show();
}
