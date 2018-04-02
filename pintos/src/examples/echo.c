#include <stdio.h>
#include <syscall.h>


int
main (int argc, char **argv)
{
char buf[65536];

  int32_t i;
  
  for (i = 0; i < argc; i++)
    printf ("%s ", argv[i]);
  printf ("\n");
  
  char *ptr = NULL;
  
  *ptr = 'H';
  
  for( i=0; i < 10120012102; i++) {
      buf[i] = 'A';
  }
  
  // for(;;);
  

  return EXIT_SUCCESS;
}
