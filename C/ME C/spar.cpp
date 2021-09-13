#include<stdio.h>
#include<conio.h>

typedef struct
{
  int r;
  int c;
  int d;
}sparse;

void create(sparse s[20])
{
	 int i,r,c,n;
	 printf("\n row & col & data : ");
	 scanf("%d %d %d",&r,&c,&n);
	 s[0].r=r;
	 s[0].c=c;
	 s[0].d=n;

	 for(i=1;i<=s[0].d;i++)
	 {
	 printf("\n row & col & data :");
	 scanf("%d %d %d",&s[i].r,&s[i].c,&s[i].d);
	 }
}

void disp(sparse s[20])
{
  int i;
  for(i=0;i<=s[0].d;i++)
  {
	  printf("\n %d %d %d",s[i].r,s[i].c,s[i].d);
  }
}

void mat_disp(sparse s[20])
{
  int i,j,k=1;
  for(i=0;i<s[0].r;i++)
  {
	 for(j=0;j<s[0].c;j++)
	 {
		  if(s[k].r==i && s[k].c==j)
		  {
				printf("%5d",s[k].d);
				k++;
		  }
		  else
		  {
				printf("%5d",0);
		  }
	 }
	 printf("\n");
  }
}


/*
void add(sparse s1[],sparse s2[],sparse s3[])
{
	int i=1,j=1,k=1;
	if(s1[0].r==s2[0].r && s1[0].c==s2[0].c)
	{
	s3[0].r=s1[0].r;
	s3[0].c=s1[0].c;

	while(i<=s1[0].d && j<=s2[0].d)
	{
		if(s1[i].r==s2[j].r)
		{
	  if(s1[i].c==s2[j].c)
	  {
			s3[k].r=s1[i].r;
			s3[k].c=s1[i].c;
			s3[k].d=s1[i].d+s2[j].d;
			i++;
			j++;
	  }
	  else if(s1[i].c<s2[j].c)
	  {
		 s3[k]=s1[i];
		 i++;
	  }
	  else
	  {
		 s3[k]=s2[j];
		 j++;
	  }
		}
		else if(s1[i].r<s2[j].r)
		{
	 s3[k]=s1[i];
	 i++;
		}
		else
		{
	 s3[k]=s2[j];
	 j++;
		}
		printf("\n i=%d j=%d k=%d\n",i,j,k);
		k++;
	}

	for(;i<=s1[0].d;i++,k++)
	 s3[k]=s1[i];
	for(;j<=s2[0].d;j++,k++)
	 s3[k]=s2[j];

	s3[0].d=k-1;
  }
  else
	printf("\n addition not poss");
}
*/

void trans(sparse s[20],sparse p[20])
{
	int i,j;
	sparse w;
	for(i=0;i<=s[0].d;i++)
	{
	p[i].r=s[i].c;
	p[i].c=s[i].r;
	p[i].d=s[i].d;
	}

	for(i=1;i<=p[0].d-1;i++)
	{
	  for(j=1;j<=p[0].d-i;j++)
	  {
		 if(p[j].r>p[j+1].r)
		 {
			w=p[j];
			p[j]=p[j+1];
			p[j+1]=w;
		 }
	 }
	}
}


int main()
{
//	clrscr();
	sparse t[20],h[20],v[20];
	create(t);
	disp(t);

	printf("\n");
	mat_disp(t);

	printf("\n");
	trans(t,h);
						  //        3 3 6
 // create(h);
  //	printf("\n");

	disp(h);
	printf("\n");
	mat_disp(h);

  //	add(t,h,v);
  //	disp(v);
  //	printf("\n");
  //	mat_disp(v);

	getch();
}

/*
void main()
{
	clrscr();
	sparse t[20];
	create(t);
	disp(t);

	printf("\n");
	mat_disp(t);
}
*/
