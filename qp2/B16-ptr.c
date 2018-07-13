#include <stdio.h>

void f1(char *q)
{
    char *r = q + strlen(q) -1;;
    for (;  q < r; q++, r--) {
       *q = *q ^ *r;
       *r = *r ^ *q;
       *q = *q ^ *r;

   }
}

main()
{
   char *p = " Hello world";
   f1(p);
   printf(" %s\n", p);
}
