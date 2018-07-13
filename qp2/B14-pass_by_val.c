#include <stdio.h>

void f1(int a)
{
    int i;
    int *j = &a;

    for (i = 0;  i <= a; i++) {
      ++j;
      printf(" %d\n", j);
    }     
}

void main(void)
{
   f1 (4);  
}
