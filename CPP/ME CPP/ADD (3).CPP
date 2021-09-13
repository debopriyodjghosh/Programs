#include<iostream.h>

template<class T>

 T Add(T a,T b)
  {T c;
   c = a + b;
   return c;
  };


void main()
{int x;
 float y;
 double z;
 x = Add(10,20);
 y = Add(10.5,8.5);
 z = Add(15.5L,-38.8L);
 cout << "x = " << x << endl;
 cout << "Enter x and y: ";
 cin >> x >> y;
 z = Add(x,y);
 cout << "z = " << z;
} 