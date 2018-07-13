#include <stdio.h>

void main(void)
{
   char  *p;
   char *line[] = { "monday", "tuesday" };
   if (p = strchr(line[0], 'd'))
   printf( " %s\n", p);
}
