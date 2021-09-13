/* TEMPLATE - GENERIC CLASS */
#include<iostream>
using namespace std;
template<class T1,class T2>
class num
{
	private :
		T1 i;
		T2 j;
	public :
		num(T1,T2);
		void show();
};
template<class T1,class T2>
num<T1,T2>::num(T1 x,T2 y)
{
	i=x;
	j=y;
}
template<class T1,class T2>
void num<T1,T2>::show()
{
	cout<<i<<endl;
	cout<<j;
}
int main()
{
	num<int,float> ob1(5,15.5);
	ob1.show();
	
	return 0;
}
