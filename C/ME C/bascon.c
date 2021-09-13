/*any base to any base conversion*/
#include<stdio.h>       //header file inclusion
#include<conio.h>
#include<math.h>
#include<string.h>
void trans(int,int);	 //function declaration
int dchk(char a[],int m);
int bchk(char a[],int m);
int ochk(char a[], int m);
int hchk(char a[], int m);
void dtb(void);
void dto(void);
void dth(void);
void btd(void);
void bto(void);
void bth(void);
void otd(void);
void otb(void);
void oth(void);
void htd(void);
void htb(void);
void hto(void);
void main()
{
	int ibase,obase;     //variable declaration
	char ans;
	clrscr();
	printf("\n\t\t ***Any Base To Any Base Conversion***");
	do
	{
		printf("\n\n\t Enter the input base(16/10/8/2)= "); //input from user
		scanf("%d",&ibase);
		printf("\n\n\t Enter the output base(16/10/8/2)= ");
		scanf("%d",&obase);
		trans(ibase,obase);
		printf("\n\n\t Do you want to continue(y/Y)? "); //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End Of Program....");
	getch();
}
void trans(ibase,obase)
{
  if(((ibase == 2)||(ibase == 10)|| (ibase == 8) || (ibase == 16)) && ((obase == 2)|| (obase == 8) || (obase == 10) || (obase == 16)))
		{
			if(ibase==10)
			{
				if(obase==2)
					dtb();
				else if(obase==8)
					dto();
				else if(obase==16)
					dth();
			}
			else if(ibase==2)
			{
				if(obase==10)
					btd();
				else if(obase==8)
					bto();
				else if (obase==16)
					bth();
			}
			else if(ibase==8)
			{
				if(obase==10)
					otd();
				else if(obase==2)
					otb();
				else if(obase==16)
					oth();
			}
			else if(ibase==16)
			{
				if(obase==10)
					htd();
				else if(obase==2)
					htb();
				else if(obase==8)
					hto();
			}
		}
		else
			printf("\n You have to choose between 16, 10, 8 & 2");
}
//definition of function 'dtb' to convert decimal to binary number
void dtb()
{
	char d[20];
	int a[20],i,j,k,flg,p,m,sumd;
	j=0,sumd=0;
	printf("\n Enter the Decimal number= ");
	scanf("%s",d);
   m = strlen(d);
	p = m-1;
	flg=dchk(d,m);
	if(flg == 1)
	{
		for(i=0;i<m;i++)
		{
			sumd=sumd+(d[i]-48)*pow(10,p);
			p--;
		}
		while(sumd!=0)
		{
			a[j]=sumd%2;
			sumd=sumd/2;
			j=j+1;
		}
		printf("\n The equivalent Binary number is= ");
		for(k=j-1;k>=0;k--)
		{
		printf("%d",a[k]);
		}
	}
	else
		printf("\n\t WRONG INPUT!!!");
}
//definition of function 'dto' to convert decimal to octal number
void dto()
{
	char d[20];
	int a[20],i,m,p,k,l,flg,sumd;
	k=0,sumd=0;
	printf("\n Enter the Decimal number= "); //input from user
	scanf("%s",d);
	m=strlen(d);
	p=m-1;
	flg=dchk(d,m);
	if(flg == 1)
	{
		for(i=0;i<m;i++)
		{
			sumd=sumd+(d[i]-48)*pow(10,p);
			p--;
		}
		//calculation of each term
		while(sumd!=0)
		{
			a[k]=sumd%8;
			sumd=sumd/8;
			k=k+1;
		}
		//display the octal no.
		printf("\n The equivalent Octal number is= ");
		for(l=k-1;l>=0;l--)
		{
			printf("%d",a[l]);
		}
	}
	else
		printf("\n\t WRONG INPUT!!!");
}
//definition of function 'dth' to convert decimal to hexadecimal number
void dth()
{

	char d[20];
	int a[20],i,j,m,p,n,flg,sumd;
	j=0,sumd=0;
	printf("\n Enter the Decimal number= ");//input from user
	scanf("%s",d);
	m=strlen(d);
	p=m-1;
	flg=dchk(d,m);
	if(flg == 1)
	{
		for(i=0;i<m;i++)
		{
			sumd=sumd+(d[i]-48)*pow(10,p);
			p--;
		}
		//calculation of each term
		while(sumd!=0)
		{
			a[j]=sumd%16;
			sumd=sumd/16;
			j=j+1;
		}
		//display the hexedecimal no.
		printf("\n The equivalent Hexadecimal number is= ");
		for(n=j-1;n>=0;n--)
		{
			if(a[n]>=10)
				printf("%c",55+a[n]);
			else
				printf("%c",48+a[n]);
		}
	}
	else
		printf("\n\t WRONG INPUT!!!");
}
//definition of function 'btd' to convert binary number to decimal number
void btd()
{
	char a[20];
	int i,sumb,m,p,flg;
	sumb=0;
	printf("\n Enter the Binary number= ");
	scanf("%s",a);
	m = strlen(a);
	p = m-1;
	flg = bchk(a,m);
	//calculation of each term
	if(flg == 1)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]=='1')
				sumb=sumb+pow(2,p);
			p--;
		}
		printf("\n The equivalent Decimal number is=%d",sumb);
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'bto' to convert binary number to octal number
void bto()
{
	char a[20];
	int i,sumb,m,p,k,l,flg;
	sumb=0,k=0;
	printf("\n Enter the Binary number= ");
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg = bchk(a,m);
	//calculation of each term
	if(flg == 1)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]=='1')
				sumb=sumb+pow(2,p);
			p--;
		}
		while(sumb!=0)
		{
			a[k]=sumb%8;
			sumb=sumb/8;
			k=k+1;
		}
		//display the octal no.
		printf("\n The equivalent Octal number is= ");
		for(l=k-1;l>=0;l--)
		{
			printf("%d",a[l]);
		}
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'bth' to convert binary number to hexadecimal number
void bth()
{
	char a[20];
	int i,sumb,m,p,n,o,flg;
	sumb=0,o=0;
	printf("\n Enter the Binary number= ");
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg = bchk(a,m);
	//calculation of each term
	if(flg == 1)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]=='1')
				sumb=sumb+pow(2,p);
			p--;
		}
		while(sumb!=0)
		{
			a[o]=sumb%16;
			sumb=sumb/16;
			o=o+1;
		}
		//display the hexadecimal no.
		printf("\n The equivalent Hexadecimal number is= ");
		for(n=o-1;n>=0;n--)
			{
				if(a[n]>=10)
					printf("%c",55+a[n]);
				else
					printf("%c",48+a[n]);
			}
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'otd' to convert octal number to decimal number
void otd()
{
	char a[20];
	int p,m,i,sumo,flg;
	sumo=0;
	printf("\n Enter the Octal number= ");  //input from user
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg=ochk(a,m);
	//calculation of each term
	if(flg==1)
	{
		for (i=0;i<m;i++)
		{
			sumo=sumo+((a[i]-48)*pow(8,p));
			p--;
		}
		//display the decimal no.
		printf("\n The equivalent Decimal number is=%d",sumo);
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'otb' to convert octal number to binary number
void otb()
{
	char a[20];
	int p,m,i,sumo,k,l,flg;
	sumo=0,k=0;
	printf("\n Enter the Octal number= ");  //input from user
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg=ochk(a,m);
	//calculation of each term
	if(flg==1)
	{
		for (i=0;i<m;i++)
		{
			sumo=sumo+((a[i]-48)*pow(8,p));
			p--;
		}
		while(sumo!=0)
		{
			a[k]=sumo%2;
			sumo=sumo/2;
			k=k+1;
		}
		//display the binary no.
		printf("\n The equivalent Binary number is= ");
		for(l=k-1;l>=0;l--)
		{
			printf("%d",a[l]);
		}
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'oth' to convert octal number to hexadecimal number
void oth()
{
	char a[20];
	int i,sumo,x,n,m,p,flg;
	sumo=0,x=0;
	printf("\n Enter the Octal number= ");  //input from user
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg=ochk(a,m);
	//calculation of each term
	if(flg==1)
	{
		for (i=0;i<m;i++)
		{
			sumo=sumo+((a[i]-48)*pow(8,p));
			p--;
		}
		while(sumo!=0)
		{
			a[x]=sumo%16;
			sumo=sumo/16;
			x=x+1;
		}
		//display the hexadecimal no.
		printf("\n The equivalent Hexadecimal number is= ");
		for(n=x-1;n>=0;n--)
		{
			if(a[n]>=10)
				printf("%c",55+a[n]);
			else
				printf("%c",48+a[n]);
		}
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'htd' to convert hexadecimal number to decimal number
void htd()
{
	char a[100];
	int i,sumd,p,m,flg;
	sumd=0;
	printf("\n Enter the Hexadecimal number= ");  //input from user
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg=hchk(a,m);
	//calculation of each term
	if(flg==1)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]>=65 && a[i]<=70)
				sumd=sumd+(a[i]-55)*pow(16,p);
			else if(a[i]>=48 && a[i]<=56)
				sumd=sumd+(a[i]-48)*pow(16,p);
			else if(a[i]>=97 && a[i]<=122)
				sumd=sumd+(a[i]-87)*pow(16,p);
			p--;
		}
		//display the decimal no.
		printf("\n The equivalent Decimal number=%d",sumd);
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'htb' to convert hexadecimal number to binary number
void htb()
{
	char a[100];
	int i,sumd,p,m,b[20],j,k,flg;
	sumd=0,k=0;
	printf("\n Enter the Hexadecimal number= ");   //input from user
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg=hchk(a,m);
	//calculation of each term
	if(flg==1)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]>=65 && a[i]<=70)
				sumd=sumd+(a[i]-55)*pow(16,p);
			else if(a[i]>=48 && a[i]<=56)
				sumd=sumd+(a[i]-48)*pow(16,p);
			else if(a[i]>=97 && a[i]<=122)
				sumd=sumd+(a[i]-87)*pow(16,p);
			p--;
		}
		while(sumd!=0)
		{
			b[k]=sumd%2;
			sumd=sumd/2;
			k=k+1;
		}
		//display the binary no.
		printf("\n The equivalent Binary number is= ");
		for(j=k-1;j>=0;j--)
		{
			printf("%d",b[j]);
		}
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of function 'hto' to convert hexadecimal number to octal number
void hto()
{
	char a[100];
	int i,sumd,p,m,b[20],j,k,flg;
	sumd=0,k=0;
	printf("\n Enter the Hexadecimal number= "); //input from user
	scanf("%s",a);
	m=strlen(a);
	p=m-1;
	flg=hchk(a,m);
	//calculation of each term
	if(flg==1)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]>=65 && a[i]<=70)
				sumd=sumd+(a[i]-55)*pow(16,p);
			else if(a[i]>=48 && a[i]<=56)
				sumd=sumd+(a[i]-48)*pow(16,p);
			else if(a[i]>=97 && a[i]<=122)
				sumd=sumd+(a[i]-87)*pow(16,p);
			p--;
		}
		while(sumd!=0)
		{
			b[k]=sumd%8;
			sumd=sumd/8;
			k=k+1;
		}
		//display the octal no.
		printf("\n The equivalent Octal number is= ");
		for(j=k-1;j>=0;j--)
		{
			printf("%d",b[j]);
		}
	}
	else
		printf("\n\t  WRONG INPUT!!!\n");
}
//definition of the function 'dchk'
int dchk(char a[],int m)
{
	int i,flag;
	flag = 0;
	for(i = 0;i < m;i++)
	{
		if((a[i]=='0') ||(a[i]=='1') ||(a[i]=='2') ||(a[i]=='3') ||(a[i]=='4') ||(a[i]=='5') ||(a[i]=='6') ||(a[i]=='7') ||(a[i]=='8') ||(a[i]=='9'))
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
   }
	return(flag);
}
//definition of the function 'bchk'
int bchk(char a[],int m)
{
	int i,flag;
	flag = 0;
	for(i = 0;i < m; i++)
	{
		if((a[i] == '0') || (a[i] == '1'))
			flag = 1;
		else
		{
				flag = 0;
				break;
		}
	}
	 return(flag);
}
//definition of the function 'ochk'
int ochk(char a[],int m)
{
	int i,flag;
	flag = 0;
	for(i = 0;i < m; i++)
	{
		if((a[i] == '0') || (a[i] == '1')  || (a[i] == '2')  || (a[i] == '3')  || (a[i] == '4') || (a[i]=='5') || (a[i]=='6') || (a[i]=='7'))
			flag = 1;
		else
		{
				flag = 0;
				break;
		}
	}
	 return(flag);
}
//definition of the function 'hchk'
int hchk(char a[],int m)
{
	int i,flag;
	flag = 0;
	for(i = 0;i < m; i++)
	{
		if((a[i] == '0') || (a[i] == '1')  || (a[i] == '2')  || (a[i] == '3')  ||
		(a[i] == '4') || (a[i]=='5') || (a[i]=='6') || (a[i]=='7') || (a[i]=='8') ||
		(a[i]=='9') || (a[i]=='A') || (a[i]=='B') || (a[i]=='C') || (a[i]=='D') ||
		(a[i]=='E')|| (a[i]=='F') || (a[i]=='a') || (a[i]=='b') || (a[i]=='c') || (a[i]=='d') || (a[i]=='e') || (a[i]=='f'))
			flag = 1;
		else
		{
				flag = 0;
				break;
		}
	}
	 return(flag);
}


/*
					  ***Any Base To Any Base Conversion***

			Enter the input base(16/10/8/2)= 16


			Enter the output base(16/10/8/2)= 2

 Enter the Hexadecimal number= Fa

 The equivalent Binary number is= 11111010

			Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 8


         Enter the output base(16/10/8/2)= 10

 Enter the Octal number= 26

 The equivalent Decimal number is=22

         Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 2


         Enter the output base(16/10/8/2)= 8

 Enter the Binary number= 10110

 The equivalent Octal number is= 26

         Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 2


         Enter the output base(16/10/8/2)= 16

 Enter the Binary number= 11001

 The equivalent Hexadecimal number is= 19

         Do you want to continue(y/Y)? y


         Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 16


         Enter the output base(16/10/8/2)= 8

 Enter the Hexadecimal number= CD

 The equivalent Octal number is= 315

         Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 10


         Enter the output base(16/10/8/2)= 16

 Enter the Decimal number= f

         WRONG INPUT!!!

         Do you want to continue(y/Y)? y


			Enter the input base(16/10/8/2)= 2


         Enter the output base(16/10/8/2)= 8

 Enter the Binary number= 1015

          WRONG INPUT!!!


         Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 8


         Enter the output base(16/10/8/2)= 16

 Enter the Octal number= 159

          WRONG INPUT!!!


         Do you want to continue(y/Y)? y


         Enter the input base(16/10/8/2)= 25


         Enter the output base(16/10/8/2)= 3

 You have to choose between 16, 10, 8 & 2

         Do you want to continue(y/Y)? n


         ....End Of Program....
*/
