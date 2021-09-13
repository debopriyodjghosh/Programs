#include<stdio.h>
#include<math.h>
void swap(int *x, int *y)
{
	int a;
	a=*x;
	*x=*y;
	*y=a;
}
int leapyear(int x)
{
	if((x%400==0)||((x%100!=0)&&(x%4==0)))
	  return 1;
	else
      return -1;
}
int absolute(int x)
{
	if(x>365)
	  return x-365;
	else
	  return 365-x;
}

int main()
{
	int d1,m1,y1,d2,m2,y2,a[12],b,c,f,i,k,r,s,x,total,l,q,m,t;
	a[1]=31;   a[2]=28;  a[3]=31;   a[4]=30;
	a[5]=31;   a[6]=30;  a[7]=31;   a[8]=31;
	a[9]=30;   a[10]=31; a[11]=30;  a[12]=31;
	printf("\n\nenter the first date month year : ");
	scanf("%d%d%d",&d1,&m1,&y1);
	f=leapyear(y1);
	if(f==1)
	  a[2]=29;
	while(d1<=0||d1>a[m1]||m1<=0||m1>12||y1<=0)
	     {
	     	printf("\ninvalid \nplease re-enter the first date month year : ");
	        scanf("%d%d%d",&d1,&m1,&y1);
	        a[2]=28;
	        f=leapyear(y1);
	        if(f==1)
	          a[2]=29;
		 }
	printf("\nenter the second date month year : ");
	scanf("%d%d%d",&d2,&m2,&y2);
	a[2]=28;
	f=leapyear(y2);
	if(f==1)
	  a[2]=29;
	while(d2<=0||d2>a[m2]||m2<=0||m2>12||y2<=0)
	     {
	     	printf("\ninvalid \nplease re-enter the second date month year : ");
	        scanf("%d%d%d",&d2,&m2,&y2);
	        a[2]=28;
			f=leapyear(y2);
			if(f==1)
			  a[2]=29;
		 }
	if(y2>y1)
	  {
	  	swap(&y1,&y2);
	  	swap(&m1,&m2);
	  	swap(&d1,&d2);
	  }
	a[2]=28;
	f=leapyear(y2);
	if(f==1)
	  a[2]=29;
	for(i=1,k=0,x=0;i<m2;i++)
	   k=k+a[i];
	if(y1!=y2 && f==1 && m2>2)
	  k=k-1;
	x=k+d2;
	r=365-x;
	a[2]=28;
	f=leapyear(y1);
	if(f==1)
	  a[2]=29;
	for(i=1,k=0,x=0;i<m1;i++)
	   k=k+a[i];
	x=k+d1;
	a[2]=28;
	for(i=y2+1,c=0,s=0;i<y1;i++)
	   {
	   	 c=c+1;
	     f=leapyear(i);
	     if(f==1)
	       s=s+1;
	   }
	b=0;
	b=c*365+s;
	total=r+b+x;
	if(y1==y2)
	  total=absolute(total);

	  t=total;
	  l=total/365;
	  q=total%365;
	  m=q/30;
	  q=q%30;

	  printf("\nthe difference between dates is %d/%d/%d\n",q,m,l);

	printf("\nThe total number of days between %d/%d/%d and %d/%d/%d is= %d\n",d1,m1,y1,d2,m2,y2,total);
	return 0;
}
