#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Reverse Debug 
//
// gdb ./a.out
// break main
//
// target record-full  // used to be target record
// or 
// record
//
// rs - reverse step
// rn - reverse next
// rc - reverse continue

int val = 0;
int z   = 4096;

void foo( )
{
  int y = 10;
  int i;

  for( i = 0; i < y; i++ )
  {
    printf("%d\n", i );
  }
}

int loop( int arg )
{
   int i;
   for( i = 0; i < 100000; i++ )
   {
      arg += i;
   }

   i = 0;

   z = 10;

   return 0;
}

int main( int argc, char * argv[] )
{
  int y;
  
  z = 5;

  z = 10;

  z = 11;

  z = 12;

  foo( );

  z = 13;

  z = 14;

  z = 15;

  z = 16;

  loop( val );

  printf("Z: %d\n", z );

  return 0;
}
