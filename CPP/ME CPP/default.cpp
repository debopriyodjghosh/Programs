#include<iostream.h>
void main()
{
	void show(int=0,int=0,int=0);
	show();
	show(10);
	show(10,20);
	show(10,20,30);

}
void show(int x,int y,int z)
{
  cout<<"\n\n x="<<x<<"\n\n y="<<y<<"\n\n z="<<z;
}