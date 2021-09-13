#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<iomanip.h>

class book
     {
      int bookno;
      char title[80];
      float price;
      public:
       void getdata()
	{
	 cout<<"\nENTER BOOK_NO    ";cin>>bookno;
	 cout<<"\nENTER NAME       ";gets(title);
	 cout<<"\nENTER PRICE      ";cin>>price;
	}
       void display()
	{
	  cout<<bookno<<"\t";
	  cout<<title<<"\t";
	  cout<<price<<"\n";
	}
       int check(int bno)
	{
	 if(bno==bookno)
	   return 1;
	 else
	   return 0;
	}
     };//end of class
void main()
 {
  fstream file;
  book obj;
  int ch;
  file.open("f:/new/bookdetails.txt",ios::ate|ios::in|ios::out);
  do
   {
    clrscr();
  cout<<"\n ENTER YOUR CHOISE\n";
  cout<<"\n 1 for append new record";
  cout<<"\n 2 for search a record";
  cout<<"\n 3 for display all records";
  cout<<"\n 4 for exit		";
  cin>>ch;
  switch(ch)
    {
     case 1:cout<<"\n ADD AN ITEM\n";
	    if(file.eof())
	       file.clear();
	    file.seekp(0,ios::end);
	    obj.getdata();
	    char ch1;
	    cin.get(ch1);
	    file.write((char *)&obj,sizeof obj);
	   break;
     case 2:cout<<"\n searching is done by book no\n";
	    cout<<"\n enter book no	";
	    int bno;
	    cin>>bno;
	    if(file.eof())
	       file.clear();
	    file.seekg(0,ios::beg);
	    int flag=0;
	    while(file.read((char *)&obj,sizeof obj))
	     {
	      if(obj.check(bno))
	       {
		 obj.display();
		 flag=1;
	       }
	     }
	     if(flag==0)
	      cout<<"\n ERROR IN SEARCHING........\n";
	      getch();
	      break;
     case 3:cout<<"\nDISPLAY OF YOUR FILE\n\n";
	    if(file.eof())
	       file.clear();
	    file.seekg(0,ios::beg);
	    while(file.read((char *)&obj,sizeof obj))
	     {
	      obj.display();
	     }
	     getch();
	     break;
     case 4:
	     file.close();
	     exit(0);
       }

   }while(1);

 }//end of main
