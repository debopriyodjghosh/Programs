#include<iostream.h>
#include<conio.h>
class loc
{
 protected:
  float ln;
  float ls;
  //float lo_e;
  //float lo_w;
  public:
  void getdata()
  {
	cout<<"\n enter longitude";
	cin>>ln;
	cout<<"\n enter latitude ";
	cin>>ls;
	//cout<<"\n enter longitude east";
	//cin>>lo_e;
	//cout<<"\n enter longitude west";
	//cin>>lo_w;
  }
  void display()
		{
		  cout<<"\n"<<" the longitude is"<<ln;
			cout<<"\n"<<"the latitude  is"<<ls;
			 //cout<<"\n"<<" the latitude east is"<<lo_e;
			 // cout<<"\n"<<"the latitude west is"<<lo_w;
		}

  friend  loc  operator ++(loc &);
  friend loc operator +(loc,loc);
  friend loc operator +=(loc,loc);

};
  loc operator ++(loc & a)
	 {
	 a.ln=a.ln+1;
	 a.ls=a.ls+1;
  //	 a.lo_e=a.lo_e+1;
	// a.lo_w=a.lo_w+1;
	 return(a);
	 }
	  loc operator + (loc a,loc b)
	 {
	  loc temp;
	  temp.ln=b.ln+a.ln;
	  temp.ls=b.ls+a.ls;
	  //temp.lo_e=b.lo_e+a.lo_e;
	  //temp.lo_w=b.lo_w+a.lo_w;
	  return temp;
	  }
	 loc operator += (loc m,loc n)
	 {
	  m.ln=m.ln+n.ln;
	  m.ls=m.ls+n.ls;
	  //m.lo_e=m.lo_e+m.lo_e;
	  //m.lo_w=m.lo_w+m.lo_w;
	  return m;
		}
		void main()
		{
		 loc m,n,p,s;
		 m.getdata();
		 cout<<"\n the first location is";
		 m.display();
		 n.getdata();
		 cout<<"\n the second location is";
		 n.display();
		 ++m;
		 m.display();
		 s=++m;
		 s.display();
	// cout<<"\n the increamentation by 1";
		 //m.display();
		 m=m+=n;
		 cout<<"\n the 1st location adding with second";
		 m.display();
		 p=m+n ;
		 cout<<"\n the 3rd location adding those two";
		 p.display();
		 getch();
		 }