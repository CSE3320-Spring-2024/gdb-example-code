//
//
// Conditional breakpoints
//
// break main.c:19 
// cond 1 ( i % 0 )


#include <stdio.h>

int main()
{

  int i;

  for( i = 0; i < 10000000; i++ )
  {
    int x;
    x = i;
  }

  return 0;
}

