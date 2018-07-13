#include <stdio.h>

int main(void)
{
   char arr[][3] =  { {'1', '2'}, {'4' , '5'} };
   printf(" %s\n",  arr + 1);

   return 0;
}
