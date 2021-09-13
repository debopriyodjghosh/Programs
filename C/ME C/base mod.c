# include<stdio.h>
# include<math.h>
# include<stdlib.h>					//header file declaration//
# include<string.h>
# include<conio.h>
void bintodec();
void bintooct();
void bintohex();
void dectobin();
void dectooct();
void dectohex();
void octtobin();
void octtodec();
void octtohex();
void hextobin();
void hextodec();
void hextooct();
void main()
{
	int s, s1,s2,s3,s4;                    		//integer variable declaration//
	char ch='y';                           			//character variable declaration//
	printf("\n\t *** Base Convertion ***");
		do
		{
			//choice from user//
		printf("\n\nEnter The Input Base=>\n");
		printf("\n\t1.Binary\n\t2.Decimal\n\t3.Octal\n\t4.Hexadecimal");
		printf("\n\n Enter your choice =>");      			 //input from user//
		scanf("%d",&s);
		switch(s)
																//calculations//
		{
			case 1:
				  printf("\n\n Enter the outpot base=>\n");
					printf("\n\t1.Decimal\n\t2.Octal\n\t3.Hexadecimal");
					printf("\n\n Enter your choice =>");
					scanf("%d",&s1);
					switch(s1)
					{
						case 1:
								bintodec();
								break;
						case 2:
								bintooct();
								break;
						case 3:
								bintohex();
								break;
						default:
								printf("\ninvalid input:");
				  }
				  break;
		case 2:
				  printf("\n\nEnter the outpot base=>\n");
					printf("\n\t1.Binary\n\t2.Octal\n\t3.Hexadecimal");
					printf("\n\n Enter your choice=>");
					scanf("%d",&s2);
					switch(s2)
					{
						case 1:
								dectobin();
								break;
						case 2:
								dectooct();
								break;
						case 3:
								dectohex();
								break;
						default:
							printf("\ninvalid input:");
				  }
				  break;

			case 3:
				  printf("\n\nEnter the outpot base=>\n");
					printf("\n\t1.Binary\n\t2.Decimal\n\t3.Hexadecimal");
					printf("\n\n Enter your choice=>");
					scanf("%d",&s3);
					switch(s3)
					{
						case 1:
								octtobin();
								break;
						case 2:
								octtodec();
								break;
						case 3:
								octtohex();
								break;
						default:
								printf("\ninvalid input:");

				  }
				  break;
				case 4:
				  printf("\n\nEnter the outpot base=>\n");
					printf("\n\t1.Binary\n\t2.Decimal\n\t3.Octal");
					printf("\n\n Enter your choice :");
					scanf("%d",&s4);
					switch(s4)
					{
						case 1:
								hextobin();
								break;
						case 2:
								hextodec();
								break;
						case 3:
								hextooct();
								break;
						default:
								printf("\ninvalid input:");
				  }
				  break;
				default:
							printf("\ninvalid input:");
		}
		printf("\n\n\t do you want to continue (y/n)?");     //continuation loop//
		fflush(stdin);
		scanf("%c",&ch);
		} 	while((ch=='y')||(ch=='Y'));
	printf("\n\t\t****THANK YOU****");

}
void bintodec() 						//definition of bintodec function//
{
	int n,p,i,j,c,s,k,flag;
	char x[50];
	s=0;flag=1;
	printf("\n\nEnter Binary number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n - 1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '1') || (x[i]== '0'))
		{
			if(x[i]=='1')
			{
				c=pow (2,p);
				s=s+c;
			}
			p --;
		}
		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}

	if(flag != 0)
		printf("\n\n  The decimal number is=> %d", s);
}
void bintooct()                 		 //definition of bintooct function//
{
	int n,p,i,j,c,r,s,k, y[50],flag;
	char x[50];
	s=0;j=0; flag = 1;
	printf("\n\nEnter Binary number=>");
	fflush(stdin);
	gets(x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n - 1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '1') || (x[i]== '0'))
		{
			if(x[i]=='1')
			{
				c=pow (2,p);
				s=s+c;
			}
				p--;
		}
		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s!=0)
	{
		y[j]=s%8;
		s=s/8;
		j++;
	}

		if (flag!=0)
		{
			printf("\n\nThe Octal number is=>\n\n");
			for(k=j-1; k>=0; k--)
			{
				printf("%2d", y[k]);
			}
		}

}

void bintohex()     								 //definition of bintohex function//
{
	int n,p,i,j,l,c,s,k,flag;
	char x[50], y[50];
	s=0;j=0;flag = 1;
	printf("\n\nEnter Binary number=>");
	fflush(stdin);
	gets(x);
	n = 0;
	while(x[n]!= '\0')
		n++;
	p = n - 1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '1') || (x[i]== '0'))
		{
			if(x[i]=='1')
			{
				c=pow (2,p);
				s=s+c;
			}
			p--;
		}
		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s != 0)
	{
		k = s%16;
		if(k<10)
			y[j]=48+k;
		else
			y[j]=55+k;
		s = s/16;
		j++;
	}
	if (flag != 0)
	{
		printf("\n\n The Hexa Decimal number is=>\n\n");
			for(l=j-1; l>=0; l--)
			{
				printf("%2c", y[l]);
			}
	}

}
void dectobin ()        						//definition of dectobin function//
{
	int n,p,i,j,c,s,k,flag,l;
	char x[50], y[50];
	s = 0;k=0;flag=1;p=0;j=0;
	printf("\n\nEnter Decimal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '0') || (x[i]== '1')||(x[i] == '2')||(x[i] == '3')||(x[i] == '4')||(x[i] == '5')||(x[i] == 			    '6')||(x[i] == '7')||(x[i] == '8')||(x[i] == '9'))
		{
			k = (x[i] - 48);
			c = (k * pow (10,p));
			s = s + c;
			p--;
		}

		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s!=0)
		{
			y[j]=s%2;
			s=s/2;
			j++;
		}

		if (flag!=0)
		{
		printf("\nThe Binary number is=>\n");
		for(l=j-1; l>=0; l--)
		{
			printf("%2d", y[l]);
		}
		}

}


void dectooct ()  						//definition of dectooct function//
{
	int n,p,i,j,c,s,k,flag,l;
	char x[50], y[50];
	s = 0;k=0;flag=1;p=0;j=0;
	printf("\n\nEnter Decimal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '0') || (x[i]== '1')||(x[i] == '2')||(x[i] == '3')||(x[i] == '4')||(x[i] == '5')||(x[i] == 			     '6')||(x[i] == '7')||(x[i] == '8')||(x[i] == '9'))
		{
			k = (x[i] - 48);
			c = (k * pow (10,p));
			s = s + c;
			p--;
		}

		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s!=0)
		{
			y[j]=s%8;
			s=s/8;
			j++;
		}

		if (flag!=0)
		{
		printf("\nThe Octal number is=>\n");
		for(l=j-1; l>=0; l--)
		{
			printf("%2d", y[l]);
		}
		}

	}

void dectohex ()       						//definition of dectohex function//
{
	{
	int n,p,i,j,c,s,k,flag,l;
	char x[50], y[50];
	s = 0;k=0;flag=1;p=0;j=0;
	printf("\n\nEnter Decimal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '0') || (x[i]== '1')||(x[i] == '2')||(x[i] == '3')||(x[i] == '4')||(x[i] == '5')||(x[i] == 	  		     '6')||(x[i] == '7')||(x[i] == '8')||(x[i] == '9'))
		{
			k = (x[i] - 48);
			c = (k * pow (10,p));
			s = s + c;
			p--;
		}

		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s!=0)
		{
			k=s%16;
  			if(k<10)
				y[j]=48+k;
 			else
				y[j]=55+k;
 			 s=s/16;
  			j++;
		}

		if (flag!=0)
		{
		printf("\nThe Hexadecimal number is=>\n");
		for(l=j-1; l>=0; l--)
		{
			printf("%2c", y[l]);
		}
	}

	}
}

void octtobin()             				//definition of octtobin function//
{
	int n,p,i,j,k,l,c,s,flag;
	char x[50], y[50];
	s = 0;  j=0;k=0;p=0;flag=1;
	printf("\n\nEnter  Octal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '0') || (x[i]== '1')||(x[i] == '2')||(x[i] == '3')||(x[i] == '4')||(x[i] == '5')||(x[i] == 	  	                     '6')||(x[i] == '7'))
		{
			k = (x[i] - 48);
			c = (k * pow (8,p));
			s = s + c;
			p--;
		}

		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s!=0)
		{
			y[j]=s%2;
			s=s/2;
			j++;
		}

		if (flag!=0)
		{
		printf("\n\nThe Binary number is=>\n");
		for(l=j-1; l>=0; l--)
		{
			printf("%2d", y[l]);
		}
		}

}
void octtodec()          					//definition of octtodec function//
{
	int n,p,i,j,c,s,k,flag;
	char x[50];
	s = 0;k=0;flag=1;p=0;
	printf("\n\nEnter Octal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '0') || (x[i]== '1')||(x[i] == '2')||(x[i] == '3')||(x[i] == '4')||(x[i] == '5')||(x[i] =='6')||(x[i] == '7'))
		{
			k = (x[i] - 48);
			c = (k * pow (8,p));
			s = s + c;
			p--;
		}

		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	 if(flag!=0)
			printf("\n\nThe decimal number is=> %d", s);
}

void octtohex()          				//definition of octtohex function//
{
	int n,p,i,j,c,s,k,l,m,flag;
	char x[50], y[50];
	s = 0;p=0;j=0;k=0;flag=1;
	printf("\n\nEnter Octal number:");
	fflush(stdin);
	gets(x);
   n=0;
	while(x[n]!='\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if((x[i] == '0') || (x[i]== '1')||(x[i] == '2')||(x[i] == '3')||(x[i] == '4')||(x[i] == '5')||(x[i] ==                 		      '6')||(x[i] == '7'))
		{
			k = (x[i] - 48);
			c = (k * pow (8,p));
			s = s + c;
			p--;
		}

		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	while(s!=0)
	{
		m=s%16;
		if(m<10)
			y[j]=48+m;
		else
			y[j]=55+m;
		s=s/16;
		j++;
	}
	if(flag!=0)
	{
		printf("\n\nThe Hexadecimal number is=>\n");
		for(l=j-1; l>=0; l--)
		{
		printf("%2c", y[l]);
		}
	}
}
void hextobin()							//definition of hextobin function//
{
	int n,p,i,j,k,l,h,c,s,m,a,flag;
	char x[50], y[50];
	s = 0;k=0;l=0;h=0;p=0;j=0;a=0;flag=1;
	printf("Enter Hexadecimal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
    if(x[i]=='0'||x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'||x[i]=='A'||x[i]=='B'||x[i]=='C'||x[i]=='D'||x[i]=='E'||x[i]=='F')
		{
			if(x[i]>=65)
			{
				j= ((x[i]-55)* pow( 16, p));
				l=l+j;
			}
			else
			{
				k = (x[i] - 48);
				c = (k * pow (16,p));
				s = s + c;
			}
			p--;
		}
		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}

h=l+s;
while(h!=0)
{
	y[a]=h%2;
	h=h/2;
	a++;
}
 if(flag!=0);
 {
	printf("\n\nThe Binary number is=>\n");
	for(m=a-1; m>=0; m--)
	{
			printf("%2d", y[m]);
	}
 }
}
void hextodec()							//definition of hextodec function//
{
	int n,p,i,j,c,s,k=0,l=0,h=0,flag;
	char x[50];
	s = 0;flag=1;
	printf("\n\nEnter Hexadecimal number=>");
	scanf("%s", x);
	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if(x[i]=='0'||x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'                   		||x[i]=='A'||x[i]=='B'||x[i]=='C'||x[i]=='D'||x[i]=='E'||x[i]=='F')
		{
			if(x[i]>=65)
			{
				j= ((x[i]-55)* pow( 16, p));
				l=l+j;
			}
			else
			{
				k = (x[i] - 48);
				c = (k * pow (16,p));
				s = s + c;
			}
			p--;
		}
		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}
	if(flag!=0)
	{
	h=l+s;
	printf("\n\nThe decimal number is=> %d", h);
	}
}
void hextooct()					//definition of hextooct function//
{
	int n,p,i,j,c,s,k,l,h,a,m,flag;
	char x[50], y[50];
	s = 0;k=0;l=0;a=0;p=0;flag=1;
	printf("\n\nEnter Hexadecimal number=>");
   fflush(stdin);
	scanf("%s", x);
   	n = 0;
	while(x[n]!= '\0')
	n++;
	p = n-1;
	for(i = 0; i < n; i++)
	{
		if(x[i]=='0'||x[i]=='1'||x[i]=='2'||x[i]=='3'||x[i]=='4'||x[i]=='5'||x[i]=='6'||x[i]=='7'||x[i]=='8'||x[i]=='9'		||x[i]=='A'||x[i]=='B'||x[i]=='C'||x[i]=='D'||x[i]=='E'||x[i]=='F')
		{
			if(x[i]>=65)
			{
				j= ((x[i]-55)* pow( 16, p));
				l=l+j;
			}
			else
			{
				k = (x[i] - 48);
				c = (k * pow (16,p));
				s = s + c;
			}
			p--;
		}
		else
		{
			flag = 0;
			printf("\n\n **wrong input**");
			break;
		}
	}

h=l+s;
while(h!=0)
{
	y[a]=h%8;
	h=h/8;
	a++;
}
 if(flag!=0);
 {
	printf("\n\nThe octal number is=>\n");
	for(m=a-1; m>=0; m--)
	{
			printf("%2d", y[m]);
	}
 }
}

