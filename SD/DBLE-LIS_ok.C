    #include<stdio.h>
    #include<conio.h>
    #include<malloc.h>
    #define null 0
	 struct node
	  {
	    int data;
	    struct node *left,*right;
	  } *node;
	void main()
	  {
	   int ch;
	   struct node **h1,**h2;
	   *h1=*h2=null;
	    do
	    {
	     clrscr();
	     printf("\n\n1: create list..\n\n2:display..\n\n3:insert at front...\n\n4:insert at end \n\n5:insert at middle\n\n6:delete at front\n\n7:delete at end..\n\n8:delete at middle \n\n9:exit...");
	     scanf("%d",&ch);
	      switch(ch)
	      {
	       case 1:
	       createlist(&h1,&h2);
	       break;
	       case 2:
	       display(&h1,&h2);
	       break;
	       case 3:
		insertatfrnt(&h1);
		break;
	       case 4:
		insertatend(&h1);
		break;
	       case 5:
		 insertatmid(&h1);
		 break;
	       case 6:
		 deleteatfront(&h1);
		 break;
	       case 7:
		 deleteatend(&h2);
		 break;
	       case 8:
		  deleteatmid(&h1);
		  break;
		case 9:
		 exit(0);
		default:
		{
		printf("wrong enter....");
		getch();
	       }
	     }
	    }
	     while(1);
	 }
	   struct node *getnode(int x)
	    {
	      struct node *new1;
	      new1=(struct node*)malloc(sizeof(node));
	      new1->left=null;
	      new1->right=null;
	      new1->data=x;
	      return(new1);
	    }
	   createlist(struct node **h1,struct node **h2)
	    {
	     struct node *new1,*ptr;
	     int x;
	     clrscr();
	     *h1=*h2=null;
	     printf("enter the value (-999 to stop)");
	     scanf("%d",&x);
	     while(x!=-999)
	      {
	       new1=getnode(x);
	       if(*h1==null)
		*h1=*h2=new1;
	       else
		{
		 (*h2)->right=new1;
		 new1->left=*h2;
		 *h2=new1;
		}
		printf("enter the value (-999 to stop)....");
		scanf("%d",&x);
	      }
	       return;
	     }
	      display(struct node **h1,struct node **h2)
	       {
		int ch;
		struct node *ptr;
		 if(*h1==null)
		   {
		    printf("list is empty...");
		    getch();
		   }
		else
		{
		 printf("press 1: for forward display....\npress 2: for backward display...");
		 scanf("%d",&ch);

		 if(ch==1)
		   {
		    ptr=*h1;
		    printf("\n\n\n\n    the forward order traversing is ........");
		    while(ptr!=null)
		     {
		      printf("%4d",ptr->data);
		      ptr=ptr->right;
		     }
		    getch();
		   }
		  else if(ch==2)
		   {
		    ptr=*h2;
		    printf("\n\n\n     the reverse order traversing is......");
		    while(ptr!=null)
		    {
		      printf("%4d",ptr->data) ;
		      ptr=ptr->left;
		     }
		    getch();
		   }
		  else
		   printf("\n\n     wrong enter");
		   getch();
		   }
		 return;
		}
	insertatfrnt(struct node **h1)
	  {
	   struct node *new2,*ptr1;
	   int x;
	   clrscr();
	   if(*h1==null)
	    {
	     printf("list is empty.......");
	     getch();
	    }
	      printf("enter the element u want to insert....");
	      scanf("%d",&x);
	      ptr1=(*h1);
	      new2=(struct node *)malloc(sizeof(struct node));
	      new2->data=x;
	      new2->right=*h1;
	      new2->left=null;
	      *h1=new2;
	      return;
	   }
	  insertatend(struct node **h1)
	   {
	    struct node *new1,*ptr;
	    int x;
	    clrscr();
	    if(*h1==null)
	     {
	      printf("the list is empty...");
	      getch();
	     }
	     ptr=*h1;
	     while(ptr->right!=null)
	      {
	       ptr=ptr->right;
	      }
	      printf("enter the element of the last node");
	      scanf("%d",&x);
	      new1=(struct node *)malloc(sizeof(struct node));
	      new1->data=x;
	      new1->right=null;
	      new1->left=ptr;
	      ptr->right=new1;
	      ptr=new1;
	      return;
	     }

	 insertatmid(struct node **h1)
	  {
	    struct node *ptr,*new1,*ptr1;
	    int x,z,c=1;
	    clrscr();
	    if(*h1==null)
	    {
	     printf("list is empty...");
	     getch();
	    }
	     printf("enter the element of the node...");
	     scanf("%d",&x);
	     printf("enter the position where u want to insert..");
	     scanf("%d",&z);
	     ptr=*h1;
	    while(ptr->right!=null && c<z-1 )
	     {
	      ptr=ptr->right;
	      c++;
	     }
	     ptr1=ptr->right;
	     new1=(struct node *)malloc(sizeof(struct node));
	     new1->data=x;
	     new1->left=ptr;
	     ptr->right=new1;
	     ptr=new1;
	     new1->right=ptr1;
	     ptr1->left=new1;
	     new1=ptr1;
	     return;
	   }
	  deleteatfront(struct node **h1)
	   {
	    struct node *ptr1,*ptr;
	     if(*h1==null)
	       {
		printf("list is empty.....");
		getch();
	       }
	      ptr=*h1;
	      *h1=(*h1)->right;
	      (*h1)->left=null;
	      free(ptr);
	      return;
	     }
	  deleteatend(struct node **h2)
	    {
	     struct node *ptr,*ptr1;
	     clrscr();
	      if(*h2==null)
	       {
		printf("list is empty......");
		getch();
	       }
	       ptr=*h2;
	       *h2=(*h2)->left;
	       (*h2)->right=null;
	       free(ptr);
	       return;
	      }
	    deleteatmid(struct node **h1)
	     {
	      struct node *ptr,*ptr1,*ptr2;
	       int z,c=1;
	       clrscr();
	      printf("enter the data.....");
	      scanf("%d",&z);
	      if(*h1==null)
	       {
		printf("list is empty....");
		getch();
	       }
	      ptr=*h1;
	      while(ptr->right!=null && ptr->data!=z)
		{
		 ptr=ptr->right;
		 c++;
		}
	      ptr->left->right=ptr->right;
	      ptr->right->left=ptr->left;
	      free(ptr);
	      return;
	     }