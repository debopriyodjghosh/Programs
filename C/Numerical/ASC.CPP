
      /*arranging the ascending order*/
  #include<stdio.h>
  #include<conio.h>
  #include<math.h>
void main()
       {
        int i,j,n;
        float a[50],temp;
	clrscr();
	printf("\n Enter how many number \n");
	scanf("%d",&n);
	printf("\n Enter the number\n");
	for(i=0;i<n;i++)
	  {
	  scanf("%f",&a[i]);
	  }
	  printf("\n unsorted list is: \n");
	   for(i=0;i<n;i++)
	    {
	       printf("%f\t",a[i]);
	    }
	  for(i=0;i<n;i++)
	  {
	   for(j=i+1;j<n;j++)
	  {
	   if(a[i]>a[j])
	    {
	     temp=a[i];
	     a[i]=a[j];
	     a[j]=temp;
	    }
	  }
	  }
	printf("\n The elemens in ascending order:\n");
	    for(i=0;i<n;i++)
	    {
	       printf("%f\t",a[i]);
	    }
	getch();
	}