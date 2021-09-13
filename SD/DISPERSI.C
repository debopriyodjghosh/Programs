//MEASURES OF DISPERSION :MEAN,MEDIAN,MODE AND STANDARD DEVIATION//
#include<stdio.h>
#include<math.h>
#define max 100

float mean(float*,int);
float median(float*,int);
float mode(float*,int);
float standarddeviation(float*,int,float);
void bubblesort(float*,int);
void swap(float*,float*);



void main()
{
//declare local variables//
int flag=1,choice=0,no=0,i=0;
float x[max],m,med,mod,sx;
clrscr();





while(1)
{
 if(flag==0)
		  break;


//display the menu//
printf("\nPRESS 1 TO FIND MEAN\n");
printf("\nPRESS 2 TO FIND MEDIAN\n");
printf("\nPRESS 3 TO FIND MODE\n");
printf("\nPRESS 4 TO FIND STANDARD DEVIATION\n");
printf("\nPRESS 5 TO EXIT\n");




//enter the data//
printf("\nENTER  YOUR CHOICE\n");
scanf("%d",&choice);



if(choice==1||choice==2||choice==3||choice==4)
	 {
	 printf("\nEnter the number of data:\n");
	 scanf("%d",&no);
		for(i=0;i<=no-1;i++)
		 {
		 printf("\nENTER SAMPLE %d\n",i+1);
		 scanf("%f",&x[i]);
		 }//end of for loop//

	 }//end of if//



switch(choice)
{



	case 1:
	m=mean(x,no);
	printf("\nMEAN=%f\n",m);
	break;




	case 2:
	med=median(x,no);
	printf("\nMEDIAN=%f\n",med);
	break;



	case 3:
	mod=mode(x,no);
	printf("\nMODE=%f\n",mod);
	break;


	case 4:
	m=mean(x,no);
	sx=standarddeviation(x,no,m);
	printf("\nSTANDARD DEVIATION =%f\n",sx);
	break;
	case 5:
	 exit();
	 break;
	default :
	flag=0;


}//end of switch case//


}//end of while loop//

getch();
}








float mean(float x[],int n)
{
//declare local variables//
int i;
float sum=0,m;



for(i=0;i<=n-1;i++)
  sum=sum+x[i];


	m=sum/n;


return m;

}//end of function mean//









float median(float x[],int n)
{
//declare local variables//
int n1,n2;
float temp;


bubblesort(x,n);


if((n%2)==0)
		 {
		  n1=n/2;
		  n2=n1+1;
		  temp=(x[n1]+x[n2])/2;
		 }
		  else
				{
				 n1=(n/2)+1;
				 temp=x[n1];
				}

return temp;

}//end of function median//











float mode(float x[],int n)
{
//declare local variables//
int i,j,count,key,frequency[100],ln;
float mo;




//count the frequency of each sample//
for(i=0;i<=n-1;i++)
{
  count=0;
	 for(j=0;j<=n-1;j++)
		{
		  if(x[j]==x[i])
				{
				 count++;
				 frequency[i]=count;
				}//end of if//

		 }//end of loop j//



}//end of loop i//



ln=frequency[0];
key=0;


for(i=1;i<=n-1;i++)
{



  if(frequency[i]>ln)
		  {
			ln=frequency[i];
			key=i;
			}//end of if//



 }//end of for loop i//

if(n==0)
	  mo=x[0];
			 else
				 mo=x[key];




return mo;
}//end of function mode//








void bubblesort(float x[],int n)
{
//declare local variables//
int pass,flag=1,traverse,i;


for(pass=0;pass<=n-1&&flag==1;pass++)
  {

	flag=0;


	  for(traverse=0;traverse<=((n-1)-pass);traverse++)
		{
		 if(x[traverse]>x[traverse+1])
				{
				swap(&x[traverse],&x[traverse+1]);
				flag=1;
				}//end of if//

		 }//end of for loop traverse//


  }//end of for loop pass//



//display the array//
for(i=0;i<=n-1;i++)
	printf("\n%f\n",x[i]);



}//end of funtion bubblesort//








void swap(float*a,float*b)
{
 //declare local variables//
 float temp;


 temp=*a;
 *a=*b;
 *b=temp;


}//end of function swap//




float standarddeviation(float x[],int n,float mean)
{
//declare local variables//
float s,sum=0,sx,temp;
int i;


for(i=0;i<=n-1;i++)
  {
	s=x[i]-mean;
	sum=sum+s*s;
  }//end of for loop i//
temp=sum/n;

sx=pow(temp,.5);


return sx;

}


