#include <iostream.h>
#include <conio.h>
class complex
{
float real,img;

friend istream & operator >> (istream &din,complex &obj)
{
  cout<<"Enter real number.. ";
  din>>obj.real;
  cout <<"Enter imaginary number.. ";
  din>>obj.img;
  return(din);
}

friend ostream & operator << (ostream &dout,complex &obj)
{
 //cout<<"\n\n complex number is....\n\n";
 dout<<obj.real<<" + i "<<obj.img;
 return(dout);
}

friend complex operator +(complex obj1, complex obj2)
{
 complex temp;
 temp.real=obj1.real + obj2.real;
 temp.img=obj1.img + obj2.img;
 return(temp);
}

friend complex operator -(complex obj1, complex obj2)
{
 complex temp;
 temp.real=obj1.real - obj2.real;
 temp.img=obj1.img - obj2.img;
 return(temp);
}
friend complex operator *(complex obj1, complex obj2)
{
 complex temp;
 temp.real=obj1.real * obj2.real;
 temp.img=obj1.img * obj2.img;
 return(temp);
}
friend complex operator /(complex obj1, complex obj2)
{
 complex temp;
 temp.real=obj1.real / obj2.real;
 temp.img=obj1.img / obj2.img;
 return(temp);
}
};
void main()
{
complex cm1,cm2,cm3;
clrscr();
cout<<"\nEnter 1st complex number...\n\n";
cin>>cm1;
cout<<"\nEnter 2nd complex number...\n\n";
cin>>cm2;

cout<<"\nAddition is...\n";
cm3=cm1+cm2;
cout<<cm3;

cout<<"\nSubtraction is...\n";
cm3=cm1-cm2;
cout<<cm3;

cout<<"\nMultiplication is...\n";
cm3=cm1*cm2;
cout<<cm3;

cout<<"\nDivision is...\n";
cm3=cm1 / cm2;
cout<<cm3;

getch();
}