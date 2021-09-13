#include "stdio.h"
#include "conio.h"
#include "graphics.h"
void clear(void);

void l_screen_section(void); /*designing of lower screen*/
void u_screen_section(void); /*designing of upper screen*/
void block_design (void); /*designing block diagram of register*/

int parallal (void);   /*parallal load operation*/
void reset (void);          /*reset operation*/
int dsl (int);          /*data-shift-left operation*/
int dsr (int);         /* data-shift-right operation*/

int take_input (void);    /*sence what mode of operation is to be done*/
void display_bit(int,int,int); /*display bits in a perticular coordinate*/
void success (void);         /* messege after completing an operation*/

int cond=0;

main()
{
	/*this is the program to simulate a 16-bit
	bi-directional shift register*/
	  int a,flag=1,item=0;
   clrscr();
   l_screen_section();
   u_screen_section();
   block_design();
   while (flag==1)
   {

	 a=take_input();
	 switch (a)
	 {
	   case 96:  item=parallal();
				 break;
	   case 97:  if (cond==1)
				  item=dsr(item);
				 else
				   item=dsl(item);
				  break;
	   case 98:  reset();
				  item=0;
				  break;
	   case 99:  flag=0;
	 }
	cond=0;
  }
	  return(0);
}




   void u_screen_section()
   {
   int row,col;
   for (row=6;row<=13;)
	{
	  for (col=20;col<=50;)
	  {
		  gotoxy(col,row);
		  printf("0");
		  col=col+2;
	  }
	  row=row+7;
	}
  }


   void l_screen_section(void)
   {
   int row=20;
   clear();
   gotoxy(5,row);
   printf("1:parallal load:(00)");
   row++;
   gotoxy(5,row);
   printf("2:shift left:(01)");
   row++;
   gotoxy(5,row);
   printf("3:shift right:(10)");
   row++;
   gotoxy(5,row);
   printf("4:reset:(11)");
   row++;
   gotoxy(5,row);
   printf("5:exit:(12)");

  }



void block_design (void)
{
 int row,col,asc,i;

 gotoxy(18,7);
 printf("%c",218);
 gotoxy(18,12);
 printf("%c",192);
 gotoxy(51,7);
 printf("%c",196);
 gotoxy(52,7);
 printf("%c",191);
 gotoxy(51,12);
 printf("%c",196);
 gotoxy(52,12);
 printf("%c",217);


 asc=193;
 for(row=7;row<=12;)
 {
   for(col=19;col<=50;col++)
   {
	 gotoxy(col,row);
	 printf("%c",196);
	 col++;
	 printf("%c",asc);
   }
   row=row+5;
   asc++;
  }
 asc=180;
 for (col=18;col<=52;)
 {
  for(row=8;row<=11;row++)
  {
   gotoxy(col,row);
   printf("%c",asc);
   row++;
   gotoxy(col,row);
   printf("%c",179);
  }
  col=col+34;
  asc--;
 }
 gotoxy(25,9);
 printf("16-bit Bi directional");
 gotoxy(28,10);
 printf("shift register");

for (i=1;i<=17;i++)
{
 gotoxy(10,i);
 printf("%c",179);
 gotoxy(60,i);
 printf("%c",179);
 }
 for (i=1;i<=80;i++)
 {
   gotoxy(i,17);
   printf("%c",196);
   gotoxy(i,19);
   printf("%c",196);
 }
  gotoxy(10,17);
  printf("%c",193);
  gotoxy(60,17);
  printf("%c",193);

  gotoxy(28,18);
  printf("MODE OF OPERATIONS:");

  gotoxy(40,25);
  printf("Software developed by S.D Madum.");
}




int take_input (void)
{
   int a,a1,a0;
   gotoxy(15,8);
   a1=getche();
   gotoxy(15,10);
   a0=getche();
   a=a0+a1;
   if(a1==49)
	  cond=1;
   return (a);
}


 int parallal (void)
{
   int data;
   clear ();
   gotoxy(5,20);
   printf("Enter the data to be loaded.. ");
   scanf("%d",&data);
   display_bit(data,6,20);
   display_bit(data,13,20);
   success();
   l_screen_section();
   return(data);
 }



  void reset (void)
{
	u_screen_section();
	success();
	l_screen_section();
 }



  int dsr (item)
 {
	unsigned int temp,mask=1;
	mask=mask<<15;
	mask=~mask;
	clear();
	gotoxy(5,20);
	printf("Enter the item to be inserted..");
	scanf("%d",&temp);
	temp=temp<<15;
	item=item>>1;
	item=item&mask;
	item=item|temp;
	display_bit(item,13,20);
	success();
	l_screen_section();
	return(item);
  }




 int dsl (item)
 {
 int temp;
 clear();
 gotoxy(5,20);
 printf("Enter the item to be inserted..");
 scanf("%d",&temp);
 item=item<<1;
 item=item|temp;
 display_bit(item,13,20);
 success();
 l_screen_section();
 return(item);
}




void display_bit (num,row,col)
 {
  unsigned int mask=1,i;
  mask=mask<<15;
	for (i=1;i<=16;i++)
	{
		 gotoxy(col,row);

		if (num&mask)
		   printf("1");
		else
		  printf("0");

	  mask=mask>>1;
	  col=col+2;
	}
 }



  void clear (void)
  {
  int i,j,row1=20,row2=25,col1=0,col2=50;
  for(i=row1;i<=row2;i++)
  {
	for(j=col1;j<=col2;j++)
	{
	  gotoxy(j,i);
	  printf(" ");
	}
  }
 }



 void success (void)
 {
	gotoxy(15,10);
	printf(" ");
	gotoxy(15,8);
	printf(" ");
	clear();
	gotoxy (15,21);
	printf ("*** SUCCESSFULY DONE ***");
	printf ("\n\n\nPress any key to continue...");
	getch();
 }

