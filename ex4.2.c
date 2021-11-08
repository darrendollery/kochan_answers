/* A program to generate a table of n and n^2
   where n = 1...10 */

#include <stdio.h>

int main(void) {

  int n;
  printf("n      n^2\n");

  for (n = 1; n <= 10; ++n)
    printf("%2i      %i\n", n , n*n);

  return 0;
}
