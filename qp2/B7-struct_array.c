#include <stdio.h>

static unsigned char arr[5] =  { 1, 2, 3, 4 , 5 };

void main(void)
{
    struct ad {
        unsigned short a;
        unsigned short b ;
    };

    struct ad *it;
    it = (struct ad *) arr;
    printf( "%d, %d\n", it->a, it->b);
}
