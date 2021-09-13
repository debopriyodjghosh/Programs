#include<iostream.h>

#define TRUE 1
#define FALSE 0

typedef unsigned char Boolean;

template <class T>
class Array1D
{
private:
int Size;
T *Element;
public:
Array1D(int Size=0);
Array1D(const Array1D<T>& v);//copy constructor
~Array1D(){delete [] Element;}
void GetData();
void ShowData();
T& operator[](int i) const;
int SIZE(){ return Size;}
Array1D<T>& operator=(const Array1D<T>& v);
Array1D<T> operator+() const;//unary +
Array1D<T> operator+(const Array1D<T>& v) const;
Array1D<T> operator-() const;//unary +
Array1D<T> operator-(const Array1D<T>& v) const;
Array1D<T> operator*(const Array1D<T>& v) const;
Array1D<T>& operator+=(const T& x);
};


template<class T>
Array1D<T>::Array1D(int S)
{
//if(S<0) throw Error();
Size=S;
Element=new T[S];
}

template<class T>
Array1D<T>::Array1D(const Array1D<T>& v)
{
//Copy constructor
Size=v.Size;
Element=new T[Size];
for(int i=0;i<Size;i++)
Element[i]=v.Element[i];
}

//Accessing array element
template<class T>
T& Array1D<T>::operator[](int i) const
{
//if(i<0 || i>Size) throw Error();
return Element[i];
}

template<class T>
Array1D<T>& Array1D<T>::operator=(const Array1D<T>& v)
{
if(this !=&v)
{
Size=v.Size;
delete [] Element;//free old space
Element=new T[Size]; //get right amount
for(int i=0;i<Size;i++)
Element[i]=v.Element[i];
}
return *this;
}

template<class T>
Array1D<T> Array1D<T>::operator-(const Array1D<T>& v) const
{
//if(Size !=v.Size) throw Error();
Array1D<T> w(Size);
for(int i=0;i<Size;i++)w.Element[i]=Element[i]-v.Element[i];
return w;
}

//Add some value to each element
template<class T>
Array1D<T>& Array1D<T>::operator+=(const T& x)
{
for(int i=0;i<Size;i++)Element[i]+=x;
return *this;
}

template<class T>
void Array1D<T>::GetData()
{
T x;
for(int i=0;i<Size;i++)
{
cout<<endl<<"a["<<i<<"]=";
cin >>x;
Element[i]=x;
}
}

template<class T>
void Array1D<T>::ShowData()
{
cout <<endl<<"a["<<Size<<"]=";
for(int i=0;i<Size;i++)
cout << Element[i]<< " ";
}

template <class M>
class Array2D
{
private:
int Rows,Cols;
Array1D<T> *Row;
public:
Array2D(int R=0,int C=0);
Array2D(const Array2D<T>& v);//copy constructor
~Array2D(){delete [] Row;}
void GetData();
void ShowData();
Array1D<T>& operator[](int i) const;
int ROWS() const { return Rows;}
int COLS() const { return Cols;}
Array2D<T>& operator=(const Array2D<T>& m);
Array2D<T> operator+() const;//unary +
Array2D<T> operator+(const Array2D<T>& m) const;
Array2D<T> operator-() const;//unary +
Array2D<T> operator-(const Array2D<T>& m) const;
Array2D<T> operator*(const Array2D<T>& m) const;
Array2D<T>& operator+=(const T& x);
};

main()
{
Array1D<float> A(3),B(3),C(3);
A.GetData();
A.ShowData();
B.GetData();
B.ShowData();
C=A-B;
C.ShowData();
return 0;
}