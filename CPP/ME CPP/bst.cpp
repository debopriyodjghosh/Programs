#include<iostream>
#include<conio.h>
#include<malloc.h>
using namespace std;
struct tree
{
int data;
struct tree *left,*right;
};

class tri
{
public:
struct tree *t;
tri()
{
	t=NULL;
}
struct tree *create(struct tree *,int);
void display(struct tree *,int);
void pre(struct tree *);
void inord(struct tree *);
void post(struct tree *);
};

struct tree *tri::create(struct tree *root,int x)
{
if(root==NULL)
{
	root=(struct tree *)malloc(sizeof(struct tree));
	root->data=x;
	root->left=NULL;
	root->right=NULL;
	return(root);
}
else
{
	if(x<root->data)
		root->left=create(root->left,x);
	else
		root->right=create(root->right,x);
	return(root);
}
}

void tri::display(struct tree *root,int level)
{
int i;
cout<<"\n";
if(root)
{
	display(root->right,level+1);
	cout<<root->data;
	display(root->left,level+1);
}
}

void tri::pre(struct tree *ree)
{
if(ree!=NULL)
{
	cout<<ree->data<<" ";
	pre(ree->left);
	pre(ree->right);
}
}

void tri::inord(struct tree *ree)
{
if(ree!=NULL)
{
	inord(ree->left);
	cout<<ree->data<<" ";
	inord(ree->right);
}
}

void tri::post(struct tree *ree)
{
if(ree!=NULL)
{
	post(ree->left);
	post(ree->right);



	cout<<ree->data<<" ";
}
}

int main()
{
int x;
tri r;
cout<<"\nEnter -99 to stop:";
cin>>x;
while(x!=-99)
{
	r.t=r.create(r.t,x);
	cout<<"Enter value -99 to stop:";
	cin>>x;
}
r.display(r.t,1);
cout<<"\npre order: ";
r.pre(r.t);
cout<<"\nin order: ";
r.inord(r.t);
cout<<"\npost order: ";
r.post(r.t);
getch();
}
