#include<stdio.h>
int main()
{
        int n,arr[20],c,x,y,i;
        printf("Enter the number of element in the array");
        scanf("%d",&x);
	printf("Enter the element");
        for(i=0;i<x;i++)
        {
                scanf("%d",&arr[i]);
 	}    
        for(i=0;i<x;i++)
        {
                printf(" %d",arr[i]);
        }
        do
        {
                printf("\n1)left shift");
                printf("\n2)Right shift");
                printf("\n3)exit");
                printf("\nEnter your choice");
                scanf("%d",&c);
                printf("\nhow many number you want to shift");
                scanf("%d",&n);
                while((n>i)||(n<1))
                {
                        printf("enter a possitive number");
                        scanf("%d",&n);
        
                }
                if(c==1)
                {
			y=arr[0];
			while(n!=0)
			{
				y=arr[0];				
				for(i=0;i<x;i++)
					arr[i]=arr[i+1];
				arr[i-1]=y;
				n--;
			}
			for(i=0;i<x;i++)
				printf(" %d",arr[i]);
                }
		else if(c==2)
			{ 
				while(n!=0)
				{					
					y=arr[x-1];
					for(i=(x-1);i>=0;i--)
						arr[i]=arr[i-1];
					arr[0]=y;
					n--;
				}
				for(i=0;i<x;i++)
					printf(" %d",arr[i]);
			}
		else
			break;
        }while(1);


        return 0;

}

