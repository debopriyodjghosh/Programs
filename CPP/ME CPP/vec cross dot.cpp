#include<iostream>
using namespace std;
#include<iomanip>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>

 class vector
  {
   private:
    int x;
    int y;
    int z;

   public:
    vector();
    void getdata();
    void putdata();

   friend int dot(vector &, vector &);
   friend vector cross(vector &, vector &);
  };

 vector::vector()
  {
   x=0;
   y=0;
   z=0;
  }

 void vector::getdata()
  {
   cout<<"                     ^    ^    ^\n";
   cout<<"Enter the vector of Xi + Yj + Zk form:\n";
   cout<<" X = ";
   cin>>x;
   cout<<" Y = ";
   cin>>y;
   cout<<" Z = ";
   cin>>z;
  }

 void vector::putdata()
  {
   cout<<endl;
   cout.width(22);
   cout<<"^";
   cout.width(7);
   cout<<"^";
   cout.width(8);
   cout<<"^\n";
   cout<<"The vector is: ";
   cout.width(6);
   cout.setf(ios::showpos);
   cout<<x<<"i";
   cout.width(6);
   cout.setf(ios::showpos);
   cout<<y<<"j";
   cout.width(6);
   cout<<z<<"k\n\n\n";
   cout.unsetf(ios::showpos);
  }


 int dot(vector &A,vector &B)
  {
   return((A.x*B.x)+(A.y*B.y)+(A.z*B.z));
  }

 vector cross(vector &A,vector &B)
  {
   vector C;

   C.x=A.y*B.z-A.z*B.y;
   C.y=A.z*B.x-A.x*B.z;
   C.z=A.x*B.y-A.y*B.x;

   return(C);
  }

 int main()
  {
   int ch;
     cout<<"\n\t\t\t-:VECTOR MULTIPLICATION:-\n";
     vector v1;
     vector v2;
     vector v3;

    do
    {
     cout<<"\n1.DOT PRODUCT OF THE VECTOR.";
     cout<<"\n2.CROSS PRODUCT OF THE VECTOR.";
     cout<<"\n3.EXIT.";
     cout<<"\nEnter the no.of choice:";
     cin>>ch;

     switch(ch)
      {
       case 1 :     cout<<"\nFIRST VECTOR:\n";
                        v1.getdata();
                        v1.putdata();
                    cout<<"\nSECOND VECTOR:\n";
                            v2.getdata();
                            v2.putdata();
                    int result;
                    result=dot(v1,v2);
                    cout<<"\n The result is scaler.";
                    cout<<"\n The scaler is: ";
                    cout.setf(ios::showpos);
                    cout<<result;
                    break;

       case 2 :     cout<<"\nFIRST VECTOR:\n";
                        v1.getdata();
                        v1.putdata();
                    cout<<"\nSECOND VECTOR:\n";
                            v2.getdata();
                            v2.putdata();
                    v3=cross(v1,v2);
                    cout<<"\n The result is vector.";
                    v3.putdata();
                    break;
        case 3 :    break;
      }
    }while(ch!=3);
}
