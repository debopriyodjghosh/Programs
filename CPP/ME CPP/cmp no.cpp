 #include<iostream>
using namespace std;
class com
{
    int real, img;
public:
    com();
    com(int, int);
    void read();
    void disp();
    friend com add(com,com);
};

com::com()
{
    real=0;
    img=0;
}

com::com(int a,int b)
{
    real=a;
    img=b;
}

void com::read()
{
    cout<<"\n enter real part: ";
    cin>>real;
    cout<<"\n enter imaginary part: ";
    cin>>img;
}

void com::disp()
{
    cout<<real<<" + "<<img<<" i"<<endl;
}


com add(com a,com b)
{
    com x;
    x.real=a.real+b.real;
    x.img=a.img+b.img;
    return x;
}

main()
{
    com p,q,r;
    p.read();
    p.disp();
    q.read();
    q.disp();
    r=add(p,q);
    cout<<"\n complex addition is:\n";
    r.disp();
    return 0;
}
