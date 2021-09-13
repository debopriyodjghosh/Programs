	/*string palindrome using function*/

void main()
{
char st1[100],st2[100];
clrscr();
printf("enter any string=");
gets(st1);
strcpy(st2,st1);
strrev(st2);
if(strcmp(st1,st2)==0)
printf("\n string is palindrome");
else
printf("\n string is not palindrome");
getch();
}
