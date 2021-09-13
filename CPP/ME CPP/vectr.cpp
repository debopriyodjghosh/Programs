//programme for vector addition , multiplication using template
#include<iostream.h>
template <class T>
class vector
{
	T x,y,z;
	public :
			vector<T> (T a=0,T b=0,T c=0)
			{
				x=a;
				y=b;
				z=c;
			}
			void create()
			{
					cout<<"\n Enter i-th ,j-th and k-th components\n";
					cin>>x>>y>>z;
			}
			friend vector<T> operator *(T a,vector<T> b);
			vector<T> operator +(vector<T> n);
			vector<T> operator *(vector<T> n);
			void display()
			{
					if (y<0)
						cout<<" "<<x<<" ^i - "<<(-1)*y<<" ^j + "<<z<<" ^k \n";
					else if(z<0)
						cout<<" "<<x<<" ^i + "<<y<<" ^j - "<<(-1)*z<<" ^k \n";
					else
						cout<<" "<<x<<" ^i + "<<y<<" ^j + "<<z<<" ^k \n";
			}
};
template <class T>
vector<T> operator *(T a,vector<T> b)
{
	vector<T> tmp;
	tmp.x=a*b.x;
	tmp.y=a*b.y;
	tmp.z=a*b.z;
	return tmp;
}
template <class T>
vector<T> vector<T>::operator +(vector<T> n)
{
	vector<T> tmp2;
	tmp2.x=x+n.x;
	tmp2.y=y+n.y;
	tmp2.z=z+n.z;
	return tmp2;
}
template <class T>
vector<T> vector<T>::operator *(vector<T> n)
{
	vector<T> tmp3;
	T t3=y*n.z;
	T t4=n.y*z;
	tmp3.x=t3-t4;
	t3=x*n.z;
	t4=z*n.x;
	tmp3.y=t4-t3;
	t3=x*n.y;
	t4=y*n.x;
	tmp3.z=t3-t4;
	return tmp3;
}

int main()
{
	vector<float> v1,v2;
	v1.create();
	cout<<"\n 1st vector is\n";
	v1.display();
	v2.create();
	cout<<"\n 2nd vector is\n";
	v2.display();
	vector<float> v3=v1+v2;
	cout<<"\n Summation of vectors are\n";
	v3.display();
	vector<float> v4=v1*v2;
	cout<<"\n Product of vectors are\n";
	v4.display();
	cout<<"\n enter component to be multiplied by 1st vector\n";
	float t1;
	cin>>t1;
	v1=t1*v1;
	cout<<"\n modified 1st vector is\n";
	v1.display();
	cout<<"\n enter component to be multiplied by 2nd vector\n";
	float t2;
	cin>>t2;
	v2=t2*v2;
	cout<<"\n modified 2nd vector is\n";
	v2.display();
	return 0;
}









