
                // GCD and LCM of N numbers //

#include<stdio.h>
#include<conio.h>
int gcd(int,int);
int lcm(int,int);

void main()
{
  int a[20];
  int i,j,ch,n;
  printf("\n\tHow many number you wan to insert :\t");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      printf("\n Enter data :\t ");
      scanf("%d",&a[i]);
  }
  do
  {
      printf("\n\n\n\t\t\tMenu for operation\n\n\t 1.Press 1 for GCD.\n\n\t 2. Press 2 for LCM.\n\n\t 3. press 0 for exit\n\n\t Enter your choice :\t");
      scanf("%d",&ch);
      if(ch <0||ch>2)
      {
          printf("\n\tWrong input");
          continue;
      }
      switch(ch)
      {
        case 0 :
                printf("\n\n\t**Thank You**");
                getch();
                return;
                break;
      case 1 :
                j=a[0];
                for(i=0;i<n;i++)
                {
                    j=gcd(j,a[i]);
                }
                printf("\n\n\tThe GCD of given numbers is :\t%d",j);
                break;
      case 2 :
                j=a[0];
                for(i=0;i<n;i++)
                {
                    j=lcm(j,a[i]);
                }
                printf("\n\n\n\tThe LCM of given numbers is :\t%d",j);
                break;

      }
  }while(ch!=0);
      getch();
}


int gcd(int p, int q)
{
    int e,f;
    for(e=1;e<=p||e<=q;e++)
    {
        if((p%e)==0 && (q%e)==0)
            f=e;
    }
    return (f);
}


int lcm(int p,int q)
{
    int e,f;
    for(e=1;e<=q;e++)
    {
        if((e*p)%q==0)
            break;
    }
    f=e*p;
    return (f);
}
