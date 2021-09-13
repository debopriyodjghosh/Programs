#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
void function(T1 a,T1 b,T2 c,T2 d,T3 e,T3 f)
{
	cout<<"\n Before swapping value of a="<<a<<" and value of b="<<b;
    swap(a,b);
    cout<<"\n After swapping value of a="<<a<<" and value of b="<<b;
    cout<<"\n Before swapping value of c="<<c<<" and value of d="<<d;
    swap(c,d);
    cout<<"\n After swapping value of c="<<c<<" and value of d="<<d;
    cout<<"\n Before swapping value of e="<<e<<" and value of f="<<f;
    swap(e,f);
    cout<<"\n After swapping value of e="<<e<<" and value of f="<<f;

}
template<class T>
void swap(T &a,T &b)
{
	T temp=a;
	a=b;
	b=temp;
}
int main()
{

	int a=10,b=20;
	float c=10.5,d=12.5;
	char e='a',f='b';
	function(a,b,c,d,e,f);

    return 0;
}
