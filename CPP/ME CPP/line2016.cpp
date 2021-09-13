#include<iostream>
#include<stdio.h>

using namespace std;

class line
{
	private :
		      float a,b,c;
		      float slope;
    public:
	          line()	
			  {
			  	a=1;
			  	b=1;
			  	c=1;
			  	slope=-a/b;
			  }
			  void input()
			  {
			  	cout<<"\nEnter value of a b and c";
			  	cin>>a>>b>>c;
			  	slope=-a/b;
			  }
			  void show()
			  {
			  	 cout<<"the line is:  "<<a<<"x +"<<b<<"y ="<<c;
			  	 cout<<"\nThe slope="<<slope;
			  }
			  line(float x,float y,float z)
			  {
		         a=x;
				 b=y;
				 c=z;
				 slope=-a/b;	  	
		      }
		    
			  int identical(line t)
			  {
			  	 if((a/t.a==b/t.b) && (b/t.b==c/t.c))
			  	   return 1;
			  	 else
				   return 0;   
			  }
			  int parallel(line t)
			  {
			  	 if(slope==t.slope)
			  	   return 1;
			  	 else
				    return 0;  
			  }
		      void perpendicular(line t)
		      {
		      	  float x,y,z; 
		      	  if(slope*t.slope==-1)
		      	   cout<<"\nThe two lines are mutually perpendicular.";
		      	  else
				  {
				  	  x=b*t.c-t.b*c;
				  	  y=t.a*c-a*t.c;
				  	  z=a*t.b-t.a*b;
				  	  if(z!=0)
				  	    cout<<"\nthe intersection point is: ("<<x<<","<<y<<")";
				  	  else
						cout<<"\nnot intersecrt" ;  
				  } 
		      	   
			  }
};

int main()
{
	line ob1,ob2;
	int i;
	ob1.show();
	ob2.show();
	ob1.input();
	ob2.input();
	ob1.show();
	ob2.show();
	i=ob1.identical(ob2);
	if(i==1)
	  cout<<"\nThe two lines are identical." ;
	i=ob1.parallel(ob2)   	;
	 if(i==1)
	    cout<<"\nThe two lines are parallel." ;
	 ob1.perpendicular(ob2);   
}
