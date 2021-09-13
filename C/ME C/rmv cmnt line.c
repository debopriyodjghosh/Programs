 #include<stdio.h>
 /*remove comment from a c program
 program should echo quote and character constants properly c comments do not nest*/
 void rcomment(int c);
 void incomment(void);
 void echo_quote(int c);
 int main(void)
 {
     int c,d;
     printf("to check/*quoted string*/\n");
     while((c=getchar())!=EOF)
        rcomment(c);
     return 0;
 }
 void rcomment(int c)
 {
     int d;
     if(c=='/')
     {
         if((d=getchar())=='*')
            incomment();
         else if(d=='/')
         {
             putchar(c);
                rcomment(d);
        }
        else{
                putchar(c);
                putchar(d);
            }
     }

     else if(c=='/' || c=='"')
     {
          echo_quote(c);
     }

        else
            putchar(c);
 }

 void incomment()
 {
     int c,d;
     c= getchar();
     d=getchar();
     while(c!='*'||d!='/')
     {
         c=d;
         d=getchar();
     }
 }

 void echo_quote(int c)
 {
     int d;
     putchar(c);
     while((d=getchar())!=c)
     {
         putchar(d);
         if(d='\\')
            putchar(getchar());
     }
     putchar(d);
 }
