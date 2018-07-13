#include <stdio.h>

#define COM(x, y)   x##y
#if 0
int i;
#endif

int f1(void)
{
    printf(" I’m in func1\n");
}

int f2(void)
{
    printf(" I’m in func2\n");
}

void main (void)
{

/*	
   float sum[3];
   printf("%d  %d\n", sizeof(sum), sizeof(&sum));
*/

/*	
   int (*ptr[2]) ();
   ptr[0] = f2;
   ptr[1] = f1;
   ptr[0]();
*/

/*
   char a[3][3] = { {'a', 'b', 'c'}, {'p', 'q', 'r'}, {'x', 'y',}};
   char **p;
   *p = a[0];
   printf(" %s\n", *p );
*/

/*
     printf(" %d\n", 3 && 2);   
*/

/*   
   int sum;
   printf(" %d\n", sum^sum);
*/

//printf(" %d\n", 3 || 2);


/*	
   i = 10;
   printf(" %d\n",  i);
*/

/*	
   char a[3][3] = { "abc", "pqr", "xyz"};
   printf(" %c\n", a[2][2] );

*/

/*
     	char a[3][3] = { 'a', 'b', 'c', 'p', 'q', 'r', 'x', 'y' };
   printf(" %s\n", a[2] );	
   */

	/*
	   int sum = o24;
   printf(" %d\n", sum );
   */

	   int sum = COM(200, 7);
   printf(" %d\n", sum);
}

