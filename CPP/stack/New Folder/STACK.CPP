#include<iostream.h>

const int Max_elem = 10;

class List
{
   int *list;        // An array of integers
   int nmax;         // The dimension of the array
   int nelem;        // The number of elements

public:
   List(int n = Max_elem) {list = new int[n]; nmax = n; nelem = 0;};
   ~List() {delete list;};
   int put_elem(int, int);
   int get_elem(int&, int);
   void setn(int n) {nelem = n;};
   int getn() {return nelem;};
   void incn() {if (nelem < nmax) ++nelem;};
   int getmax() {return nmax;};
   void print();
};
class Stack : public List
{
   int top;

public:
   Stack() {top = 0;};
   Stack(int n) : List(n) {top = 0;};
   int push(int elem);
   int pop(int& elem);
   void print();
};

int Stack::push(int elem)
{
   int m = getmax();
   if (top < m)
   {
      put_elem(elem,top++);
      return 0;
   }
   else
      return -1;
}

int Stack::pop(int& elem)
{
   if (top > 0)
   {
      get_elem(elem,--top);
      return 0;
   }
   else
      return -1;
}

void Stack::print()
{
   int elem;

   for (int i = top-1; i >= 0; --i)
   {  // Print in LIFO order
      get_elem(elem,i);
      cout << elem << "\n";
   }
}
