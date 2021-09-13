#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class line
{
  private:
	 int a,b,c,m;
	 public:
	  line()
	  {
		a=1;
		b=1;
		c=1;
		m=-a/b;
		}
		void getdata(int x,int y, int z)
		{
		 a=x;
		 b=y;
		 c=z;
		 m=-a/b;
		 }
		 void identical(line r)
		 {
			if(m==r.m && c==r.c)
			cout<<"\nlines are identical";
			else

					cout<<"\nlines are not identical";
					}
		  void parallel(line r)
		  {
				if(m==r.m && c!=r.c)
			cout<<"\nlines are parallel";
			else

					cout<<"\nlines are not parallel";
					}
					 void perpendicular(line r)
		 {
			if(m*r.m==-1 )
			cout<<"\nlines are perpendicular";
			else

					cout<<"\nlines are not perpendicular";
					}
					void nonvrtcl()
					{
               int x1,x2,y1,y2,k;
					  cout<<"\nenter a point on the line";
					  cin>>x1>>y1;
					  cout<<"\nenter another one point on that line";
					  cin>>x2>>y2;
					  k=(y2-y1)/(x2-x1);
					  if(k!=0)
					  {
					  cout<<"\nthe line is non verticle";
					  cout<<"\nthe slope is"<<k;
					  }
					  else
					  cout<<"\n line is vertical";
					  }
					  void intersect(line r)
					  {
					  int x,y;
						y=((r.a*c)-(a*r.c))/((b*r.a)-(r.b*a));
						int n=c-(b*y);
                  int l=b*y;
                  cout<<l<<n;
						x=(c-(b*y))/a;
						cout<<"\n the intersecting points are y="<<y<<"x="<<x;
                  }
					  };
				void main()
				{
				 line s;
				 line t;
				 s.getdata(5,3,2);
				 t.getdata(4,2,3);
				 s.parallel(t);
				 s.nonvrtcl();
				 t.nonvrtcl();
				 s.identical(t);
				 s.perpendicular(t);
             s.intersect(t);
             getch();
				 }
