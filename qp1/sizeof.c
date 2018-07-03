#include <stdio.h>

int main()
{
   float sum[3];
   printf("%d  %d\n", sizeof(sum), sizeof(&sum));
   
   return 0;
}