#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
#include<conio.h>
class book
{
    char author[10];
    char title[10];
    int price;
    char publ[10];
    int stock;
public:

    getdata()
    {
        cout<<"\n Enter Book title : ";
         fflush(stdin);
        gets(title);
         fflush(stdin);
        cout<<"\n Enter Author : ";
         fflush(stdin);
        gets(author);
        cout<<"\n Enter Publication : ";
         fflush(stdin);
        gets(publ);
        cout<<"\n Enter Price : ";
        cin>>price;
        cout<<"\n Enter Stock value : ";
        cin>>stock;
    }


    void display()
    {
        cout<<"\n Book Details : \n\n Book name : "<<title<<"\n Author : "<<author<<"\n Price : "<<price<<"\n Publication : "<<publ<<"\n Copies available : "<<stock<<endl;
    }

    int cost()
    {
        int m=0,c;
        cout<<"\n Enter how many copies needed ? ";
        cin>>c;
        if(c<=stock)
        {
            stock=stock-c;
              m=price*c;
            cout<<"\n Total cost : "<<m;
            return (m);
        }
        else
        {
          cout<<"\n Sorry! Required copies not in stock ";
          return (0);
        }
    }
  int search(char *a,char *p)
{
    int f=0;
   if(strcmp(a,title)==0 && strcmp(p,author)==0 )
        {
            f=1;
        }
        else
            f=0;
        return (f);
}

};


int main()
{
    int n,f,i,l;
    static int w=0;
    book b[10];
     char a[10],p[10];
    cout<<"\n how many books ? ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        b[i].getdata();
    }
   /* cout<<"\n \nThe book store has following books : ";

        for(i=0;i<n;i++)
    {
        b[i].display();
    }*/

     cout<<"\n\n\n\n ****** DJ BOOK STORE ****** \n\n\n";
     cout<<"\n Enter how many books you want to buy : ";
     cin>>l;
     while(l>0)
     {
        cout<<" \n Enter Book NAme to be searched : ";
        fflush(stdin);
        gets(a);
        cout<<"\n Enter Author : ";
        fflush(stdin);
        gets(p);

    for(i=0;i<n;i++)
    {
        f=b[i].search(a,p);
            if(f==1)
            {
                int qwerty;
                b[i].display();
                qwerty=b[i].cost();
                if(qwerty==0)
                {
                    l++;
                }
                else{
                w=w+qwerty;
                cout<<"\n Total All Book cost = : "<<w;
                }
                break;
            }
    }
           if(f==0)
            {
                cout<<"\n Sorry! this book is not available";
                cout<<"\n Total All Book cost = : "<<w;
            }
        l--;
    }
}

