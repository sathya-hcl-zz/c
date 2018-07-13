#include <stdio.h>

int main(void)
{
   char *pt, *ptr;
    pt = (char *) malloc(5);
    strcpy(pt, "abcd");
    ptr =  (char *) realloc(pt, 10);
    ptr = pt;
    ptr = pt + strlen(pt);
    strcpy(ptr, "ef");
    printf(" %s\n",  pt);

    return 0;
}
