#include<stdio.h>
#include<string.h>
struct tm
{
    char plr[20];
    char team[20];
    float btavg;
};
main()
{
    int n,i;
    struct tm p[20];
    char t[20];
    printf("\nhow many teams : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter plyr name, team name, batting average :");
        scanf("%s %s %f",p[i].plr,p[i].team,&p[i].btavg);
    }
    printf("\n enter the team you want to search : ");
    scanf("%s",t);

    for(i=0;i<n;i++)
    {
        if(strcmp(t,p[i].team)==0)
        {
            printf("\n %s \t %s \t %f ",p[i].plr,p[i].team,p[i].btavg);
        }
    }
    getch();
}
