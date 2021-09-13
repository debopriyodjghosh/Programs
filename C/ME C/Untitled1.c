#include<stdio.h>
#include<conio.h>
#include<math.h>
void distance()
{
	int x1,x2,y1,y2,a,b,d;
	float c; 
	printf("x1=");
	scanf("%d",&x1);
	printf("y1=");
	scanf("%d",&y1);
	printf("again\n");
	printf("x2=");
	scanf("%d",&x2);
	printf("y2=");
	scanf("%d",&y2);
a=pow((x2-x1),2);
b=pow((y2-y1),2);	
c=sqrt(a+b);
printf("distance=%f",c);		
}
void triangle()
{
	int x1,x2,x3,y1,y2,y3,a,b,d,e,g,h;
float c,f,i,s,area,temp;
	printf("\nenter the vertices of the tringle\n");
	
	printf("enter 1st vertex\nx1=");
	scanf("%d",&x1);
	printf("y1=");
	scanf("%d",&y1);

	printf("enter 2nd vertex\nx2=");
	scanf("%d",&x2);
	printf("y2=");
	scanf("%d",&y2);

	printf("enter 3rd vertex\nx3=");
	scanf("%d",&x3);
	printf("y3=");
	scanf("%d",&y3);
	
a=pow((x2-x1),2);
b=pow((y2-y1),2);	
c=sqrt(a+b);
//printf("distance=%f",c);		
d=pow((x3-x1),2);
e=pow((y3-y1),2);	
f=sqrt(d+e);
//printf("distance=%f",f);		
g=pow((x3-x2),2);
h=pow((y3-y2),2);	
i=sqrt(g+h);
//printf("distance=%f",i);		

s=((c+f+i)/2);
temp=(s*(s-c)*(s-f)*(s-i));
area=sqrt(temp);
printf("area=%f",temp);
}
void swtch()
{
		int x;
printf("choose from below:\n1.distance between two points\n2.area of any triangle\nyour choice is :");	
scanf("%d",&x);
switch(x)
{
case 1:
	distance();
break;
case 2: 
	triangle();
break;
default : printf("\nwrong choice\ntry again\n\n");
					swtch();	
}
}
main()
{
swtch();
}


