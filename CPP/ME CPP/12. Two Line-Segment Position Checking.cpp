/*Check wheather 2 lines are parallel or perpendicular or oblique*/

#include<iostream>
using namespace std;

class line_segment
{
    int x1,y1,x2,y2,m;
    public:
        void getdata()
        {
            cout<<"\nEnter 1st co-ordinate: ";
            cin>>x1>>y1;
            cout<<"\nEnter 2nd co-ordinate: ";
            cin>>x2>>y2;
        }
        void calculate_m();
        friend void position_check(line_segment,line_segment);
};

void line_segment::calculate_m()
{
    m=(y2-y1)/(x2-x1);
}

void position_check(line_segment a, line_segment b)
{
    if(a.m==b.m)
        cout<<"\nThe Lines are Parallel";
    else if((a.m-b.m)==-1)
        cout<<"\nThe Lines are Perpendicular";
    else
        cout<<"\nThe lines are Oblique";
}

int main()
{
    line_segment line1,line2;
    float m1,m2;
    line1.getdata();
    line2.getdata();
    line1.calculate_m();
    line2.calculate_m();
    position_check(line1,line2);
}
