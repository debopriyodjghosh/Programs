#include<stdio.h>
#include<stdlib.h>
main()
{
    FILE *p,*q;
    int c=0,s=0;
    char ch;
    p=fopen("d://ab.txt","w");
    printf("\npress 0 for exit : ");
    while(1)
    {
        ch=getchar();
        if(ch=='0')
            break;
             fputc(ch,p);
    }

    fclose(p);

     p=fopen("d://ab.txt","r");
     q=fopen("d://ab1.txt","w");
     while(!feof(p))
     {
         ch=fgetc(p);
         c++;
         if(ch>=65 && ch<=91)
         {

             ch=ch+5;

         }

         if(ch==' ')
         {
             s++;
         }

   fputc(ch,q);

     }
     fclose(q);
     fclose(p);
printf("\n the nos of spaces %d and the no of ch %d ",s,c);
}
