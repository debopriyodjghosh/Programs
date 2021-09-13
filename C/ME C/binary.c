/*BINARY SEARCH TO FIND ELIMENT(SORTED IN ASSENDING OR DECENDING ORDER) FROM AN ARRAY*/
/*Saturday, September 21, 2013*/
   
   #include<stdio.h>
   int binarysearchrecursive(int a[],int lb,int up,int item);
   void main()
   {
   	int a[100],i,n,item,loc;
         printf("\n ENTER SIZE OF ARRAY(Declared Size Is 100)= ");
   	scanf("%d",&n);
   	printf("\n ENTER %d ELEMENTS IN ARRAY IN ANY ASSENDING(OR DECENDING) ORDER = ",n);
   	for(i=0;i<n;i++)
   	{
   		scanf("%d",&a[i]);
   	}
   	printf("\n ENTER ITEM YOU WANT TO SEARCH= ");
   	scanf("%d",&item);
   	loc=binarysearchrecursive(a,0,n-1,item);
   	if(loc==-1)
   	{
   		printf("\n Item Not Found......");
   	}
   	else 
   		printf("\n Item Found At Index a[%d]= %d ",loc,a[loc]);
   }
   int binarysearchrecursive(int a[],int lb,int up,int item)
   {
   	int mid;
   	if(lb>up)
   		return -1;
   	else
   		{
   			mid=(lb+up)/2;
   			if(item == a[mid])
   				return mid;
   			else if(item<a[mid])
   				return binarysearchrecursive(a,lb,mid-1,item);
   			else
   				return binarysearchrecursive(a,mid+1,up,item);
   		}
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
