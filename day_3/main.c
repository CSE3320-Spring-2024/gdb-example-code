#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>


/*  
 *    Use gdb to trace a problem with a child process
 *
 *    set follow-exec-mode child
 *
 *
 *
 *
 */

char * token[10];

int main( int argc, char * argv[] )
{
  pid_t pid = fork();

  if( pid == 0 )
  {
     if( strcmp( token[0], ">" ) == 0 )
     {
        printf("Found one\n");
     }  
     else
     {
        printf("Didn't find one\n");
     }
     
     printf("Done searching\n");
  }
  else
  {
    int status;
    wait( &status );
  }
}
