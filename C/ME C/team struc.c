#include<stdio.h>
struct plyr
{
    char plr[10];
    float batavg;
};
struct team
{
    char tm[10];
    int pr;
    struct plyr p[10];
};

void main()
{
    int i,n,j,k,m;
    struct team t[10];
    printf("\n enter details : \n how many teams?  ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nenter team name : ");
    scanf("%s",t[i].tm);
    printf("\n enter no of players : ");
    scanf("%d",&t[i].pr);
    for(j=0;j<t[i].pr;j++)
    {
        printf("\n enter player name : ");
        scanf("%s",t[i].p[j].plr);
        printf("\n enter batting avg : ");
        scanf("%f",&t[i].p[j].batavg);
    }

    }



    printf("\ncontent\n");

    for(i=0;i<n;i++)
    {
    printf(" \n\nteam name : %s",&t[i].tm);
    printf("\n players : %d\n",t[i].pr);
    for(j=0;j<t[i].pr;j++)
    {
        printf("\n player name : %s",t[i].p[j].plr);
        printf("\n batting avg : %f",t[i].p[j].batavg);
    }

    }
}
