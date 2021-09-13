/* Time difference and addition Operation */

#include <iostream.h>
#include <conio.h>

template <class T>
class mytime
{
 private:
 T H;
 T M;
 T S;
 public:

 mytime();
// mytime(T &hr,T &min,T &sec);
 mytime<T> operator + (mytime<T> &obj);
 mytime<T> operator - (mytime<T> &obj);
 void display();
 void input();
};

template<class T>
mytime<T>::mytime()
{
 H=0;
 M=0;
 S=0;
}

/*template<class T>
mytime<T>::mytime(T &hr,T &min,T &sec)
{
 H=hr;
 M=min;
 S=sec;
} */

template<class T>
void mytime<T>::display()
{
 cout<< H << " hours " << M <<" minutes " << S << " seconds ";
}

template<class T>
mytime<T> mytime<T>::operator + (mytime<T> &obj)
{
 mytime <T> temp;
 T d;
 temp.S= S + obj.S;
 if(temp.S >= 60)
   {
    temp.M=temp.M + 1;
    temp.S=temp.S-60;
   }
 temp.M=temp.M + M + obj.M;
 if(temp.M >= 60)
   {
    temp.H += 1;
    temp.M=temp.M-60;
   }
 temp.H = temp.H + H + obj.H;
 if(temp.H >= 24)
   {
    temp.H = temp.H - 24;
    d=d+1;
    cout<<"1 day ";
   }
return(temp);
}

template<class T>
mytime <T> mytime<T>::operator - (mytime<T> &obj)
 {
  mytime <T> temp;
  T d,m,y;
 if(S >= obj.S)
   temp.S=S-obj.S;
 else
   {
   temp.S=S + 60 - obj.S;
   obj.M = obj.M + 1;
   }

 if(M >= obj.M)
   temp.M=M-obj.M;
 else
   {
   temp.M=M + 60 - obj.M;
   obj.H=obj.H+1;
   }
temp.H=H-obj.H;
 return(temp);
}

template<class T>
void mytime<T>::input()
{
 cout<<"Hour = ";
 cin>>H;
 cout<<endl<<"Minute = ";
 cin>>M;
 cout<<endl<<"Second = ";
 cin>>S;
}

void main()
{
 clrscr();
 mytime <int> ob1,ob2,ob3,ob4;
 cout<<"\n\nInput 1st time:  ";
 ob1.input();
 cout<<"\n\nInput 2nd time:  ";
 ob2.input();
 cout<<"\n\nAddition of two times....";
 ob3 = ob1 + ob2;
 ob3.display();
 cout<<"\n\nSubtraction of two times....";
 ob4=ob1 - ob2;
 ob4.display();
 getch();
}
