#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<iomanip.h>

class student
     {
      int rollno;
      char name[80];
      int age;
      public:
       void getdata()
	{
	 cout<<"\nENTER ROLL_NO    ";cin>>rollno;
	 cout<<"\nENTER NAME       ";gets(name);
	 cout<<"\nENTER AGE      ";cin>>age;
	}
       void display()
	{
	  cout<<rollno<<"\t";
	  cout<<name<<"\t";
	  cout<<age<<"\n";
	}
       int check(int rno)
	{
	 if(rno==rollno)
	   return 1;
	 else
	   return 0;
	}
     };//end of class
void main()
 {
  fstream file;
  student obj;
  int ch,rno;
  file.open("f:/new/student_details.txt",ios::ate|ios::in|ios::out|ios::binary);
  do
   {
    clrscr();

  cout<<"\n ENTER YOUR CHOISE\n";
  cout<<"\n 1 for append new record";
  cout<<"\n 2 for search a record";
  cout<<"\n 3 for display all records";
  cout<<"\n 4 for update a record";
  cout<<"\n 5 for delete a record";
  cout<<"\n 6 for exit		";
  cin>>ch;
  switch(ch)
    {
     case 1:cout<<"\n ADD AN RECORD\n";
	    if(file.eof())
		 file.clear();
	    file.seekp(0,ios::end);
	    obj.getdata();
	    char ch1;
	    cin.get(ch1);
	    file.write((char *)&obj,sizeof obj);
	   break;
     case 2:
	    cout<<"\n searching is done by roll no\n";
	    cout<<"\n enter roll no	";
	    //int rno;
	    cin>>rno;
	    if(file.eof())
		 file.clear();
	    file.seekg(0,ios::beg);
	    int flag=0;
	    while(file.read((char *)&obj,sizeof obj))
	     {
	      if(obj.check(rno))
	       {
		 obj.display();
		 flag=1;
	       }
	     }
	     if(flag==0)
	      cout<<"\n ERROR IN SEARCHING........\n";
	      getch();
	      break;
     case 3:
	    cout<<"\nDISPLAY OF YOUR RECORD\n\n";
	    if(file.eof())
		 file.clear();
	    file.seekg(0,ios::beg);

	    while(file.read((char *)&obj,sizeof obj))
	     {
	      obj.display();
	     }
	     getch();
	     break;
     case 4: //update
	    cout<<"\n enter roll no	";

	    cin>>rno;
	    if(file.eof())
		 file.clear();
	    file.seekg(0,ios::beg);
	     flag=0;
	    while(file.read((char *)&obj,sizeof obj))
	     {
	      if(obj.check(rno))
	       {
		 if(file.eof())
		   file.clear();

		 file.seekp(-(sizeof(obj)),ios::cur);
		 cout<<"\n enter new values";
		 obj.getdata();
		 file.write((char *)&obj,sizeof obj)<< flush;
		 flag=1;
	       }
	     }
	     if(flag==0)
	      cout<<"\n ERROR IN SEARCHING........\n";
	      getch();
	      break;
     case 5: //del
	    break;
     case 6:
	     file.close();
	     exit(0);
       }

   }while(1);

 }//end of main
