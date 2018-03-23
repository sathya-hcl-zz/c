#include <stdio.h>

int f1(void)
{
    printf(" I’m in func1\n");
}

int f2(void)
{
    printf(" I’m in func2\n");
}

int main()
{
   int (*ptr[2]) ();
   ptr[0] = f2;
   ptr[1] = f1;
   ptr[0]();
   
   return 0;
}