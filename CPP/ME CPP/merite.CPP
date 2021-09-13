#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct stud
	{
	int roll;
	char name[100];
	int marks[5];
	int tot;
	 int flag;
	}obj[100],sorta[100];
void sort(int);
void dis(int);
void display(int);
void main()
	{
	int n,temp;
	clrscr();
	cout<<"\nEnter no. of students :";
	cin>>n;
		for(int j=0;j<n;j++)
		{
		  temp=0;
			cout<<"\nEnter roll no. :";
			cin>>obj[j].roll;
			cout<<"\nEnter name :";
			gets(obj[j].name);
			cout<<"\nEnter marks of 5 subjects: ";
			for(int i=0;i<5;i++)
				{
				cin>>obj[j].marks[i];
				 temp+=obj[j].marks[i];

				}
			 obj[j].tot=temp;
			 obj[j].flag=0;
		}
		display(n);
		sort(n);
	      cout<<"\n\nAfter sorting in MERITE LIST \n\n";
	      display(n);
	      getch();
	}//end of main()
void display(int n)
	{
	int i;
	for(int j=0;j<n;j++)
	{
	cout<<"\nRoll no. :"<<obj[j].roll;
	cout<<"\nName :";
	puts(obj[j].name);
	cout<<"\nMarks obtained in 5 subjects :";
	for(i=0;i<5;i++)
	cout<<obj[j].marks[i]<<"  ";
	cout<<"\nTotal marks :"<<obj[j].tot<<"\n\n\n";

	}
	}//end dis
void sort(int n)
	{       //apply bubble sort in desending order
	  int i,pass,flag;
	  struct stud temp;
	  for(pass=1;pass<n;pass++)
	   {
	    flag=0;
	    for(i=0;i<(n-pass);i++)
	     if(obj[i].tot<obj[i+1].tot)    //desending logic in acending
	       {                    // logic '<' sign becomes '>' others
		temp=obj[i];       // wile be same
		obj[i]=obj[i+1];
		obj[i+1]=temp;
		flag=1;
	       }
	       if(!flag)return;
	   }
	}

