/*create a class(point) that consist of X and Y coordinates and using this design a class
 called (line segment). use appropriate constructors and destructor.
write a function to check whether two line segments are parallel or not.
checking with value (2,2) (4,2) and (1,1) (4,1)*/
#include<iostream>
#include<conio.h>
using namespace std;
class point
{
    protected:
    int x1,y1,x2,y2;
    public:
   point()
    {
        cout<<"\n enter the value of X1 : "<<endl;
        cin>>x1;
        cout<<"\n enter the value of Y1 : "<<endl;
        cin>>y1;
         cout<<"\n enter the value of X2 : "<<endl;
        cin>>x2;
        cout<<"\n enter the value of Y2 : "<<endl;
        cin>>y2;
    }

    void output()
    {
        cout<<"\n the coordinate of first point is : ( "<<x1<<","<<y1<<" )"<<endl;
        cout<<"\n the coordinate of second point is : ( "<<x2<<","<<y2<<" )";
    }

    };

class line_segment:public point
{
  public:
      line_segment():point()
      {}
      friend void chk(line_segment,line_segment);
      int slope()
      {
         int m=(y2-y1)/(x2-x1);
          return m;
      }
};
void chk(line_segment a, line_segment b)
{
int m1,m2;
m1=a.slope();
m2=b.slope();
   if(m1==m2)
        cout<<"\n the line segments are parallel ";
    else
        cout<<"\n the line segments are not parallel ";
}
int main()
{
    line_segment a,b;
    chk(a,b);
    getch();
    return 0;
}


