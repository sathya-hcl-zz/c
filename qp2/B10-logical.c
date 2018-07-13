#include <stdio.h>

void main (void)
{
   int a = 3, b =5;
   a ^=b;
   b ^= a;
   a ^=b;
   printf( "%d, %d\n", a, b);
}
