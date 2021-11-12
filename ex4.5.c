/* A program to print powers of two. This was mainly
   and exercise in making existing code easier to read */

#include <stdio.h>

int main(void) {

  int n, two_to_the_n;
  printf("TABLE OF POWERS OF TWO\n\n");
  printf(" n     2 to the n\n");
  printf("---    ----------\n");

  two_to_the_n = 1;

  for (n = 0; n <= 10; ++n) {
    printf("%2i      %i\n", n, two_to_the_n);
    two_to_the_n*=2;}

  return 0;
}
