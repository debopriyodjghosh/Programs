#include<iostream.h>
#include<conio.h>
class binary
{
	private :
				  int a[10];
	public:
				binary();
				binary operator+(binary);
				int operator[](int);
				void show();
				void input();
};
int binary :: operator[](int c)
{

	return(a[c]);
}
binary binary :: operator+(binary t)
{
	 int c=0,i;
	 binary temp;
	 for(i=9;i>=0;i--)
	 {
		 if(a[i]==1 && t.a[i]==1 && c==0)
		 {
			 temp.a[i]=0;
			 c=1;
		 }
		 else if(a[i]==1 && t.a[i]==1 && c==1)
		 {
			 temp.a[i]=1;
			 c=1;
		 }
		 else if((a[i]==0 && t.a[i]==1) && c==1)
		 {
			 temp.a[i]=0;
			 c=1;
		 }
		 else if((a[i]==1 && t.a[i]==0) && c==1)
		 {
			 temp.a[i]=0;
			 c=1;
		 }
		 else
		 {
			 temp.a[i]=a[i]+t.a[i]+c;
			 c=0;
		 }

	 }
	 return temp;

}
binary :: binary()
{
  int i;
  for(i=0;i<10;i++)
  {
	 a[i]=0;
  }
}
void binary :: input()
{
	 int b,i=9;
	 cout<<"\nenter a number:" ;
	 cin>>b;
	 while(b>0)
	 {
		a[i]=b%2;
		i--;
		b=b/2;
	 }
}

void binary :: show()
{
	int i=0;
	cout<<"\nThe binary number= " ;
	while(i<10)
	{
	  cout<<a[i];
	  i++;
	}
}

void main()
{
	binary ob1,ob2,ob3;
	ob1.show();
	ob2.show();
	ob3.show();
	ob1.input();
	ob1.show();
	ob2.input();
	ob2.show();
	ob3=ob1+ob2;
	ob3.show();
	int c,l;
	cout<<"\nEnter bit position:" ;
	cin>>c;
		if(c<0 || c>9)
	 {
		 cout<<"\ninvalid positiuon";

	 }
	 else
		l=ob1[c];//l=pb1.oprator[](c);
	cout<<"\nthe value of "<<c<<"th position = "<<l;
	getch();
}
