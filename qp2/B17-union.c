#include <stdio.h>

void main(void)
{
	typedef union {
           unsigned int a;
           unsigned char b[2] ;
    	} test;

    test p = {576};

    printf("%d %d\n", p.b[0], p.b[1]);
    printf ("%d\n", p.a);
}    
