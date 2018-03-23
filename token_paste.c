#include <stdio.h>

#define COM(x, y)   x##y

int main()
{
   int sum = COM(200, 7);
   
   printf(" %d\n", sum);
   
   return 0;
}