/* A program to generate the set of triangular
   numbers between five and fifty in steps of five */

#include <stdio.h>

int main(void) {

  int triangularNumber, n;

  for (n=5; n <= 50; n+=5)
    printf("The %ith triangular number is %i\n", n, (n*(n+1))/2);

  return 0;
}
