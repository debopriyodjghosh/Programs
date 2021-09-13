 #include<stdio.h>
 #include<string.h>
 main()
 {
     int i,j,k,n=0;
     char s[20][20];
     char p[20];
     printf("\n Enter the names in sorted order : ");

     do
     {
         fflush(stdin);
         printf("\n Enter name : ");
         scanf("%[^\n]",s[n]);
     }while(n<20 && strcmp(s[n++],"end")!=0);

     n--;

    fflush(stdin);
     printf("\n Enter the name to be inserted : ");
   scanf("%[^\n]",p);

     for(i=0;i<n;i++)
     {
         if(strcmp(s[i],p)>0)
         break;
         }




     for(j=n-1;j>=i;j--)
     {
         strcpy(s[j+1],s[j]);
     }

         strcpy(s[i],p);
      n++;
          printf("\nThe names after insertion :  ");
         for(i=0;i<n;i++)
     {
         printf("\n %s ",s[i]);

         }

         getch();
 }
