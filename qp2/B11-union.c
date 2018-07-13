#include <stdio.h>

void main(void)
{
   union 
   {
       struct 
       {
           char c[2];
           char ch[2];
       } s;
       
       struct 
       {
           int i;
           int j;
       } st;

    } u = { {12, 1} , {15, 1} };

    printf(" %d %d\n", u.st.i, u.st.j);
}
