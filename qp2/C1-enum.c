#include <stdio.h>

void main(void)
{
   int sum;
   enum tmp { A, B, C = 5, D, E };
   sum  = A + B +C +D+E;
   printf( "%d\n", sum);
}
