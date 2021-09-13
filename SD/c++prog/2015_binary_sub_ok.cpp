// 2015 SECOND DAY Q.No.6

/* Overload the following two operators for the Binary class : Opearator '-' which gives
	the substraction value of two binary expressions. For simplicity, assume that the first operand is always
                   greater than the second operand
                 Opearator '[]' which indexes a bit by position and returns its value as 0 or 1*/

#include<iostream.h>
#include<string.h>
#include<conio.h>

class binary
{
 char arr[30];
 public:
 binary () {arr[0]='\0'; }

 void get()
 {
	cout<<"Enter a binary string  ";
	cin>>arr;
 }
 binary operator -(binary b);
 char operator [](int);
 void show();
};
char binary :: operator [] (int k)
 {
  return arr[k];
 }
binary binary :: operator -(binary b)
{
 binary w;
 int i,j,l1,l2,k,c=0,x;
 l1=strlen(arr);
 l2=strlen(b.arr);
 k=l1;
 w.arr[k--]='\0';
 for(i=l1-1,j=l2-1;i>=0 && j>=0;i--,j--)
	 {
		x=arr[i]-b.arr[j]-c;
		if (x==0)
		  {
		  w.arr[k--]='0';
		  c=0;
		  }
		 else if (x==1)
			{
			w.arr[k--]='1';
			c=0;
			}
		else if(x==-1)
		  {
		  w.arr[k--]='1';
		  c=1;
		  }
		else if(x==-2)
		  {
		  w.arr[k--]='0';
		  c=1;
		  }
	 }

		while(i>=0)
		{
		 x=arr[i--]-48-c;
		 if (x==0)
		  {
		  w.arr[k--]='0';
		  c=0;
		  }
		 else if (x==1)
			{
			w.arr[k--]='1';
			c=0;
			}
		else if(x==-1)
		  {
		  w.arr[k--]='1';
		  c=1;
		  }
		} //end of while
 return w;
}

void binary :: show()
{
	cout<<arr;
}

void main()
{
 binary a,b,c;
 a.get();
 b.get();
 cout<<"\n 1st string is\n";
 a.show();
 cout<<"\n 2nd string is\n";
 b.show();
 c=a-b;
 cout<<"\nAfter substraction we get : ";
 //Display using [] operator of the object c
 int i=0;
 while(c[i] !='\0')
	cout<<c[i++];
 getch();
}