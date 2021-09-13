#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
class record
      {
	char name[30];
	int marks;
	int roll;
       public:
	void getdata();
	void putdata();
	char* name1(){return name;}
      };
void record::getdata()
{
 cout<<"\n\nEnter the student's name: ";
 fflush(stdin);
 cin>>name;
 cout<<"\n\nEnter the student's roll: ";
 cin>>roll;
 cout<<"\n\nEnter the student's marks: ";
 cin>>marks;
 cout<<"\n\nRecord inserted succesfully....";
}
void record::putdata()
{
 cout<<"\n\nThe student's name: "<<name;
 cout<<"\n\nThe student's roll: "<<roll;
 cout<<"\n\nThe student's marks: "<<marks;
}


record protect,str;
void main(void)
{

 fstream obj;
 obj.open("stud.txt",ios::ate);
 obj.close();
 //ofstream obj1;
 int ch;
 char ch1,name[30];
 long sz=sizeof(protect);
 //obj.open("stud.txt",ios::app|ios::in|ios::binary|ios::out);
   fstream tobj1;


 while(1)
  {
   clrscr();
   cout<<"\n\n$$$$\t\tMENU\t\t$$$$";
   cout<<"\n\nTo add a new user..---> Press 1.";
   cout<<"\n\nTo List the users..---> Press 2.";
   cout<<"\n\nTo modify a single user..---> Press 3.";
   cout<<"\n\nTo delete a single user..---> Press 4.";
   cout<<"\n\nTo insert a single user..---> Press 5.";
   cout<<"\n\nTo exit..---> Press 6.";
   cout<<"\n\n\nNow enter your choice: ";
   fflush(stdin);
   cin>>ch;
   switch(ch)
    {
     case 1:

      obj.open("stud.txt",ios::app|ios::in|ios::binary|ios::out);
      do
       {
	protect.getdata();
	obj.clear();
	obj.seekp(0,ios::end);
	obj.write((char *)&protect, sz);
	/*cout<<"\n\n\n\nDo you want to continue(y/n): ";
	cin>>ch1;*/
       }while(/*ch1=='y'||ch1=='Y'*/0);
       obj.close();
      break;
     case 6:
      obj.close();
      exit(0);
     case 2:
       //obj.close();

       obj.open("stud.txt",ios::in|ios::binary);
       obj.clear();
       obj.seekg(0);
       cout<<"\n\n\n\nStudent:-->\n\n";
       obj.read((char *)&protect, sz);
       while(!obj.eof())
	{
		protect.putdata();
		cout<<"\n\n";
		obj.read((char *)&protect, sz);
	}
       getch();
       obj.close();
       break;
     case 3:
       //obj.close();
       obj.open("stud.txt",ios::out|ios::in|ios::binary);
       cout<<"\n\nEnter a valid student name: ";
       cin>>name;
       obj.clear();
       obj.seekp(0);
       int flag=0;
       while(!(obj.eof()))
	{
	 obj.read((char *)&protect, sz);
	 if(strcmp(name,protect.name1())==0)
	  {
	   protect.putdata();
	   getch();
	   flag=1;
	   cout<<"\n\nNow enter the new value:--->\n";
	   protect.getdata();
	   obj.seekp(((-1)*sz),ios::cur);
	   obj.write((char *)&protect, sz);
	  }
	}
       if(!flag)
	 cout<<"\n\nData not found!!!";
       else
	 cout<<"\n\nModified successfully....";
       //obj.close();
       obj.close();
       //obj.open("stud.txt",ios::out|ios::in|ios::binary|ios::app);
       break;
     case 4:
       obj.open("stud.txt",ios::out|ios::in|ios::binary|ios::app);

       tobj1.open("temp1.txt",ios::in|ios::binary|ios::out);
       obj.clear();
       tobj1.clear();
       cout<<"\n\nEnter a valid student-name: ";
       //fflush(stdin);
       cin>>name;
       if(!tobj1)
	  cout<<"temp file cant be opened...";
       if(!obj)
	  cout<<"Source file cant be opened...";
       //getch();
       tobj1.clear();
       //obj.open("d:\stud.txt",ios::in|ios::binary);
       obj.clear();
       obj.seekg(0);
       tobj1.seekp(0);
       int flg=0;
       obj.read((char *)&protect,sz);
       while(!(obj.eof()))
	{

	 protect.putdata();
	 cout<<"\nname="<<name;
	 getch();
	 if(strcmp(name,protect.name1())!=0)
	 {
	   tobj1.write((char *)&protect,sz);
	   //obj1.seekp(0,ios::cur);
	  }
	 else
	   flg=1;

	   obj.read((char *)&protect,sz);
	}
       if(!flg)
	 {
	 cout<<"\n\nData is not found....Deletion aborted....";
	 }

       cout<<"data of protect";
       getch();
       while(!(tobj1.eof()))
	 {
	  tobj1.read((char *) &protect,sz);
	  protect.putdata();
	 }
/*       		*/
       if(flg)
	{
	 tobj1.clear();
	 obj.clear();
	 tobj1.close();
	 obj.close();
	 remove("stud.txt");
	 cout<<"file removed";
	 getch();

       tobj1.open("temp1.txt",ios::in|ios::binary);
       cout<<"file opeened";
       getch();
       obj.open("stud.txt",ios::out|ios::binary);
       tobj1.clear();
       obj.clear();
       tobj1.seekp(0);
       obj.seekp(0);
       tobj1.read((char *)&protect, sz);
       while(!tobj1.eof())
	{
	 obj.write((char *)&protect, sz);
	 tobj1.read((char *)&protect, sz);
	}
	 //obj.open("stud.txt",ios::app|ios::in|ios::binary|ios::out);
	}
	remove("temp1.txt");
	obj.close();
	tobj1.close();
       break;
    case 5:

      cout<<"\n\nEnter the username before you want to insert: ";
      cin>>name;
      tobj1.open("d:\temp1.txt",ios::ate|ios::in|ios::binary|ios::out);
      tobj1.clear();
      obj.clear();
      obj.seekg(0);
      while(!(obj.eof()))
	{
	 obj.read((char *)&protect,sz);
	 if((strcmp(name,protect.name1()))==0)
	  {
	   str.getdata();
	   tobj1.write((char *)&str,sz);
	  }
	 tobj1.write((char *)&protect,sz);
	}
      obj.close();
      tobj1.close();
      remove("stud.txt");
      rename("temp.txt","stud.txt");
      obj.open("stud.txt",ios::app|ios::in|ios::binary|ios::out);
      break;
    }
  }
}











