#include <stdio.h>

int *f1(void)
{
    int x = 10;
    return (&x);
}

int *f2(void)
{
    int *ptr;
    *ptr = 10;
    return ptr;
}

int *f3(void)
{
   int *ptr;
   ptr = (int *) malloc(sizeof (int));
  *ptr = 10;
   return ptr;
}

int main(void)
{
   int r1, r2, r3;

   r1 = f1();
   r2 = f2();
   r3 = f3();
   printf(" %d %d %d\n", r1, r2, r3);

   return 0;
}
