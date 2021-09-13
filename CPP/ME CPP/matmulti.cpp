#include<iostream>
using namespace std;
class matrix
{
    int arr[40][40],r,c;
public:
    matrix()
    {
    for (int i=0;i<40;i++)
    {
        for(int j=0;j<40;j++)
            arr[i][j]=0;
    }
    }
    matrix(int row,int col)
    {
        r=row;c=col;
        int t;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>t;
                arr[i][j]=t;
            }
        }


    }
    matrix operator+(matrix m)
    {
        matrix mat;
        mat.r=r;mat.c=c;

                for(int i=0;i<m.r;i++)
                {
                    for(int j=0;j<m.c;j++)
                    {
                        mat.arr[i][j]=arr[i][j]+m.arr[i][j];
                    }
                }
                return mat;


    }
    void display()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<"  "<<arr[i][j];
            }
            cout<<"\n";
        }
    }
};


int main()
{
    matrix m1,m2;
    int row,col;
    cout<<"Enter the number of row and coloum: ";
    cin >> row;
    cin >>col;
    m1=matrix(row,col);
    m1.display();
    cout<<"Enter the number of row and coloum: ";
    cin >> row;
    cin >>col;
    m2=matrix(row,col);
    m2.display();
    matrix m3;
    m3=m1+m2;
    m3.display();
}


