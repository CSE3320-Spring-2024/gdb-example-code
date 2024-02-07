#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int val = 0;
int z   = 4096;

extern void do_stuff( );
extern int  thread_main( );

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

  loop( val );

  do_stuff( );

  printf("Z: %d\n", z );

  return 0;
}
