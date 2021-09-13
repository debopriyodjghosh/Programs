#include<iostream.h>
#include<conio.h>


class fraction
{
  private:
    int num;
    int denum;
  public:
    void getdata()
    {
      cout<<"\n Enter nummarator and denomenator==> ";
      cin>>num>>denum;
    }
    void putdata()
    {
      cout<<"\n\n"<<num<<"\n--\n"<<denum;
    }
    fraction operator -(void)
    {
       fraction r;
       r.denum=denum;
       r.num=(-1)*num;
       return r;
    }
    fraction operator+ (fraction);
    fraction operator* (fraction);
    fraction operator/ (fraction);
    friend fraction reduce(fraction);
    friend int hcf(int,int);
};

fraction reduce(fraction f)
{
   int n=hcf(f.num,f.denum);
   if(n>1)
   {
      f.num=f.num/n;
      f.denum=f.denum/n;
   }
   return f;
}

int hcf(int x,int y)
{
   if(x==y)
     return x;
   if(x>y)  return hcf(x-y,y);
   else return hcf(x,y-x);
}

fraction fraction:: operator+ (fraction f)
{
   fraction r;
   r.denum=denum*f.denum;
   r.num=(num*f.denum)+(f.num*denum);
   return reduce(r);
}

fraction fraction:: operator* (fraction f)
{
   fraction r;
   r.denum=denum*f.denum;
   r.num=num*f.num;
   return reduce(r);
}
fraction fraction:: operator/ (fraction f)
{
   fraction r;
   r.num=num*f.denum;
   r.denum=denum*f.num;
   return reduce(r);
}

void main()
{
  fraction ob1,ob2,ob7,ob8;
  clrscr();
  ob1.getdata();
  ob2.getdata();
  ob1.putdata();
  ob2.putdata();
  fraction ob3=ob1+ob2;
  ob3.putdata();
  fraction ob4=ob1*ob2;
  ob4.putdata();
  fraction ob5=ob1/ob2;
  ob5.putdata();
  fraction ob6=-ob5;
  ob6.putdata();
  ob7.getdata();
  ob8.getdata();
  fraction ob9=(-ob1+ob2)*ob7+ob8;
  ob9.putdata();
  getch();
}
