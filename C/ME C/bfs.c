#include<stdio.h>
int main()
{
    int graph[10][10],i,v,j,n,mk=0,q[20],d[20],top=-1,flag=0,s;
    printf("\n enter the size of the array: ");
    scanf("%d",&n);
    printf("enter data");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&graph[i][j]);
    }

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {printf("%d",graph[i][j]);
    }
    printf("\n");
}
for(i=0;i<n;i++)
{
    d[i]=-1;
}
printf("enter the start vertex");
scanf("%d",&s);
d[s]=0;
q[++top]=s;
while(top!=-1)
{
    v=q[top--];
    printf("\n node travaersed %d",v);
    for(i=0;i<n;i++)
    {
        if(graph[v][i]==1)
        {
            if(d[i]<0)
            {
                d[i]=d[v]+1;
                q[++top]=i;
            }
        }
    }
}
flag=0;
for(i=0;i<n;i++)
{
    if(d[i]==-1)
    {
        flag=1;break;
    }
}
if (flag==1)
printf("graph is disconnected");
else
printf("graph is connected");
printf("\n");
for(i=0;i<n;i++)
printf("%d",d[i]);
return 0;
}
