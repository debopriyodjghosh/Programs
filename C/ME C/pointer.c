
/*pointer demo*/

#include <stdio.h>
void main()
{
int a = 10;
int *p;
p = &a;
printf("\nAddress of a: %u", &a);
printf("\n\nAddress of a: %u", p);
printf("\n\nAddress of p: %u", &p);
printf("\n\nValue of p: %d", p);
printf("\n\nValue of a: %d", a);
printf("\n\nValue of a: %d", *(&a));
printf("\n\nValue of a: %d", *p);
getch();
}
