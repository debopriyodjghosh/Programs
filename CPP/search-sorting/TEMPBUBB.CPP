/*************************************************************************
 * PROGRAM: BUBBEL SORT                                                  *
 * USING TEMPLATE                                                        *
 * PROGRAM IS OK                                                         *
 **************************************************************************/
#include<iostream.h>
#include<conio.h>
#include<process.h>
template<class T>
void bubbles(T a[],int n)
  {
   int flag=0;
   for(int i=0;i<n&&flag==0;i++)
    {
      flag=1;
      for(int j=0;j<(n-i-1);j++)
       {
	if(a[j]>a[j+1])
	 {
	  flag=0;
	  swap(a[j],a[j+1]);
	 }
       }
    }
  }
template<class X>
void swap(X &a,X &b)
  {
   X temp=a;
   a=b;
   b=temp;
  }

void main()
  {
   int ch,n;
   int x[10];
   float y[10];
   char z[10];
   do
    {
      clrscr();
      cout<<"\nWELL COME TO BUBBLE_SORT USING TEMPLATE\n\n";
      cout<<"\n\n.........PROGRAM'S MENU.........\n\n";
      cout<<"\nENTER 1 TO USE INTEGER ARRAY\n";
      cout<<"\nENTER 2 TO USE FLOAT ARRAY\n";
      cout<<"\nENTER 3 TO USE CHARECTER ARRAY\n";
      cout<<"\nENTER 4 TO EXIT\n";
      cout<<"\n\nENTER YOUR CHOISE		";
      cin>>ch;
      switch(ch)
       {
	case 1:cout<<"\n\nHOW MANY NUMBER DO YOU WANT TO INSERT      ";
	       cin>>n;
	       for(int i=0;i<n;i++)
		{
		 cout<<"\nx["<<i<<"] = ";
		 cin>>x[i];
		}
	       bubbles(x,n);
	       cout<<"\n\nAFTER SORTING THE ARRAY\n\n";
	       for(i=0;i<n;i++)
		 cout<<" "<<x[i];
	       getch();
	       break;
	case 2:cout<<"\n\nHOW MANY NUMBER DO YOU WANT TO INSERT	     ";
	       cin>>n;
	       for(i=0;i<n;i++)
		{
		 cout<<"\ny["<<i<<"] = ";
		 cin>>y[i];
		}
	       bubbles(y,n);
	       cout<<"\n\nAFTER SORTING THE ARRAY\n\n";
	       for(i=0;i<n;i++)
		 cout<<" "<<y[i];
	       getch();
	       break;
	case 3:cout<<"\n\nHOW MANY CHARECTER DO YOU WANT TO INSERT	";
	       cin>>n;
	       for(i=0;i<n;i++)
		{
		 cout<<"\nz["<<i<<"] = ";
		 z[i]=getch();
		 cout<<z[i];
		}
	       bubbles(z,n);
	       cout<<"\n\nAFTER SORTING THE ARRAY\n\n";
	       for(i=0;i<n;i++)
		 cout<<" "<<z[i];
	       getch();
	       break;
	case 4:cout<<"\n\n\n\n...... THE PROGRM IS WRITTEN BY RAJ ...... \n";
	       cout<<"\n..............THANK YOU...............";
	       getch();
	       exit(0);

       }//end of switch
    }while(1);
  }