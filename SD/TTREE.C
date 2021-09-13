 /* Threaded binary tree creation and inorder traversal display */

 #include<stdio.h>
 #include<conio.h>
 #include<alloc.h>
 #define NULL 0

 typedef struct tnode
  {
    int data;
    struct tnode *left,*right;
    int th;
  } tnode;

 tnode *root;

 tnode * getnode(int x)
   {
    tnode *p;
    p=(tnode *)malloc(sizeof(tnode));
    p->data=x;
    p->left=p->right=NULL;
    p->th=1;
    return(p);
   }

 void setleft(tnode *lnode,tnode *ptr)
   {
    lnode->left=ptr;
    ptr->right=lnode;
   }

 void setright(tnode *rnode, tnode *ptr)
   {
    tnode *p;
    p=rnode->right;
    rnode->right=ptr;
    rnode->th=0;
    ptr->right=p;
   }

 void tinorder()
   {
    tnode *ptr;
    if (root==NULL) return;
    ptr=root;
   do
      {
      while (ptr->left != NULL)
	 ptr=ptr->left;
      do
	{
	  printf("%d  ",ptr->data);
	  if (ptr->th==0)
	    {
	     ptr=ptr->right;
	     break;
	    }
	  else
	    ptr=ptr->right;

	} while(ptr != NULL);

       } while(ptr != NULL);
   }  //end of tinorder function

  void main()
    {
     tnode *ptr,*ptr1;
     int x;
     clrscr();
     do
     {
       printf("Enter element (0 for none) ");
       scanf("%d",&x);
       if (x==0) break;
       if(root==NULL)
	  root=getnode(x);
       else
	  {
	  ptr=ptr1=root;
	  while(ptr != NULL)
	    {
	     ptr1=ptr;
	     if(x<ptr->data)
		 ptr=ptr->left;
	     else
		 ptr=(ptr->th==1)? NULL:ptr->right;
	    } //end of inner while
	  ptr=getnode(x);
	  if(x<ptr1->data)
	     setleft(ptr1,ptr);
	  else
	     setright(ptr1,ptr);
	  }//end of outer else
    } while(1);
    printf("\n\n Elements are in inorder traversal....\n\n");
    tinorder();
    getch();
   }//end of main
