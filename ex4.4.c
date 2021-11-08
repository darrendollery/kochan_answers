/* A program to print the first 10 factorials
   n! 1....10 */

#include <stdio.h>

int main (void) {

  int n, factorial, count;
   
  for (count = 1; count <= 10; ++count){
    for (n=1, factorial=1; n <= count; ++n) {
    factorial = factorial * n;
    }
    printf("Factorial %i! is %i\n", count, factorial);
  }

  return 0;
}
    
    
    
