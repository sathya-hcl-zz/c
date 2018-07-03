#include <stdio.h>

int main()
{
   char a[3][3] = { {'a', 'b', 'c'}, {'p', 'q', 'r'}, {'x', 'y',}};
   char **p;
   *p = a[0];
   printf(" %s\n", *p );
   
   return 0;
}