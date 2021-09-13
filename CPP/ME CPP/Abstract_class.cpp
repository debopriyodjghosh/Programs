/*Abstract Class*/

#include<iostream>
using namespace std;

class convert
{
    protected:double val1,val2;
    public:
        convert(double i)
        {
            val1=i;
        }
        double getconvert()
        {
            return(val2);
        }
        double getinit()
        {
            return(val1);
        }
        virtual void compute()=0;
};
class ltog:public convert
{
    public:
    ltog(double i):convert(i)
    {

    }
    void compute()
    {
        val2=val1/3.7854;
    }
};
class ftoc:public convert
{
public:
    ftoc(double i):convert(i)
    {

    }
    void compute()
    {
        val2=(val1-32)/1.8;
    }
};
class ftom:public convert
{
public:
    ftom(double i):convert(i)
    {

    }
    void compute()
    {
        val2=val1/3.281;
    }
};
int main()
{
    convert *p;
    ltog ob1(3.78541);
    ftoc ob2(98);
    ftom ob3(1);
    p=&ob1;
    cout<<p->getinit()<<"Liters\n";
    p->compute();
    cout<<p->getconvert()<<"Gallon\n";
    p=&ob2;
    cout<<p->getinit()<<"Farenhite\n";
    p->compute();
    cout<<p->getconvert()<<"Celcious\n";
    p=&ob3;
     cout<<p->getinit()<<"Fits\n";
    p->compute();
    cout<<p->getconvert()<<"Meters\n";
    return(0);
}

































