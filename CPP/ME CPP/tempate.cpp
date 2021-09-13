//Template...

#include<iostream>
using namespace std;

template<class T>

void swap1(T &a,T &b){
   T temp;
   temp=a;
   a=b;
   b=temp;
 }

 int main(){
  int a=10,b=20;
  swap1(a,b);
  cout<<"a= "<<a<<"\tb= "<<b<<endl;
  float a1=10.6,b1=20.2;
  swap1(a1,b1);
  cout<<"a1= "<<a1<<"\tb1= "<<b1<<endl;
  char a2='10',b2='/';
  swap1(a2,b2);
  cout<<"a2= "<<a2<<"\tb2= "<<b2;
  return 0;

 }
