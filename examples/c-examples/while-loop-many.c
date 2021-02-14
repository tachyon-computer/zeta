#include <stdio.h>

int main(void) {
  const int ITERATIONS = 10;
  int i = 0;
  while (i < ITERATIONS) {
    printf("iteration %d\n", i);
    i++;
  }

  return 0;
}
