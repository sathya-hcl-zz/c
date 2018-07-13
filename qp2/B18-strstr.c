#include <stdio.h>

void main(void)
{
   char  *p;
   char *line[] = { "sunday", "monday", "tuesday" };
   if (p = strstr(line[0], "day"))
   printf(" %s\n", p);
}
