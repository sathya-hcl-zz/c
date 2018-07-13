#include <stdio.h>

#if  ~(i^i)
#error "deadbeef"
#endif

int main(void)
{
     printf( "Hello World\n",);

     return 0;
}
