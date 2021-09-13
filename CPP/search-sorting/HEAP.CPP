/****************************************************************************
 * PROGRAM TO IMPLEMENT TEMPLATE CLASS MIN_HEAP. PERFORM THE FOLLOWING      *
 * 1> INSERTION                                                             *
 * 2> UPDATION                                                              *
 * 3> RE_HEAPIFICATION                                                      *
 * 4> HEAP_SORT                                                             *
 *  PROGRAM IS OK                                                           *
 ****************************************************************************/
#include<iostream.h>
#include<conio.h>
const int size = 10;
template<class t>
class minheap
  {
    t array[size];

   public:
    void insertion()
      {
       cout<<"\n\nENTER DATA FOR ARRAY\n";
       for(int i=0;i<size;i++)
	 {
	   cout<<"array ["<<i<<"]	";
	   cin>>array[i];
	 }
      }
    void update()
      {
       int i;
       cout<<"\n\nENTER THE LOCATION TO BE UPDATED\n";
       cin>>i;
       if(i<size&&i>=0)
	 {
	   cout<<"\n\nENTER DATA FOR array ["<<i<<"]	";
	   cin>>array[i];
	 }
	else
	  cout<<"\n\n!!!!!.....YOU HAVE ENTERED A WRONG LOCATION";
      }
    void reheap()
      {
       int s,f,i;
       t val;
       for(i=1;i<size;i++)
	 {
	  val=array[i];
	  s=i;
	  f=(s-1)/2;
	  while(s>0&&array[f]<val)
	    {
	     array[s]=array[f];
	     s=f;
	     f=(s-1)/2;
	    }
	   array[s]=val;
	 }
      }
    void show()
      {
	cout<<"\n\nDATA ARE IN THE ARRAY  AS\n";
	for(int i=0;i<size;i++)
	  cout<<"  "<<array[i];

      }
    void heapsort()
      {
	 int i,s,f;
	 t val;
	 for(i=size-1;i>0;i--)

	  {
	   val=array[i];
	   array[i]=array[0];
	   f=0;
	   if(i==1)
	     s=-1;
	   else
	     s=1;
	   if(i>2&&array[2]>array[1])
	       s=2;
	   while(s>=0 && val<array[s])
	     {
	      array[f]=array[s];
	      f=s;
	      s=2*f+1;
	      if(s+1<=i-1&&array[s]<array[s+1])
		   s++;
	      if(s>i-1)
		   s=-1;
	     }
	    array[f]=val;
	  }
      }
  }; //end of class
void main()
 {
   minheap <int> obj1;
   minheap <float> obj2;
   clrscr();
   cout<<"USE FOR INTEGER VALUE\n";
   obj1.insertion();
   cout<<"\n before sort\n\n";
   obj1.show();
   obj1.reheap();
   obj1.heapsort();
   cout<<"\n\n after sort\n\n";
   obj1.show();
   cout<<"\n\n\nUSE FOR FLOAT VALUE\n";
   obj2.insertion();
   cout<<"\n before sort\n\n";
   obj2.show();
   obj2.reheap();
   obj2.heapsort();
   cout<<"\n\n after sort\n\n";
   obj2.show();

   getch();
 }