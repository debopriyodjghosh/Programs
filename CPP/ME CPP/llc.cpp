#include<iostream>
using namespace std;
class node{
int d;
node *next;
public:
    node* create();
    show();
};
node* node:: create()
{
    node *r,*n,*root;
    int t;
    cout<<"\n enter data : (press -99 to stop)\n";
    cin>>t;
    root=r=NULL;
    while(t!=-99)
    {
        n=new node;
        n->d=t;
        n->next=NULL;
        if(root==NULL)
            root=n;
        else{
            r->next=n;
        }
        r=n;
        cin>>t;
    }
    return root;
}

node :: show()
{
    node *temp;
    temp=this;
    while(temp!=NULL)
    {
        cout<<temp->d<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}


int main()
{
    node l,*ll;
    ll=l.create();
    cout<<"LL created.."<<endl;
    ll->show();

}
