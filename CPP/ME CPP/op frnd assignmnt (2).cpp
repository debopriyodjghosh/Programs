#include<iostream>
using namespace std;
class comp
{
    private:
        int r,ig;
    public:
        void getdata()
        {
            cout<<"\nEnter Real & Imaginary Part:";
            cin>>r>>ig;
        }
       void display()
        {
            if(ig<0)
                cout<<r<<"-i"<<ig*(-1);
            else
                cout<<r<<"+i"<<ig;
        }
         friend comp operator+(comp, comp);
};
        comp operator+(comp a,comp b)
        {
            comp temp;
            temp.r=a.r+b.r;
            temp.ig=a.ig+b.ig;
            return temp;
        }
int main()
{
 comp a,b,c;

        cout<<"\n    Addition using operator overloading"<<endl;

                  cout<<"\nEnter the 1st Number:";
                    a.getdata();
                    cout<<"\nEnter the 2nd Number:";
                    b.getdata();
                c=a+b;
            cout<<"\nThe result is ";
            c.display();


}



