#include <stdlib.h>
#include <stdio.h>
#include <string.h>

extern int z;

int *value;

void do_stuff( )
{
  value = (int*) malloc( sizeof( int ) * 10000 );
  memset( value, 0, 10000 * sizeof( int ) );

  FILE *fd = fopen( "file.txt", "r" );

  fread( &value, sizeof( int ), 10000, fd );

  z = 10;

  fclose( fd );
}

int  thread_main( ) 
{
}
