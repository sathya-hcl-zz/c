#include <stdio.h>

void main(void )
{
   unsigned int i = 0x53;
   unsigned int j = 0x12;
   unsigned int sub;

asm("mov eax, i");
asm("sub eax, j");
asm("mov sub, eax");


printf( "%x\n", sub);
}
