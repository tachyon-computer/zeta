#include <stdio.h>

int main(void) {
  const int ITERATIONS = 1;
  int i = 0;
  do {
    printf("iteration %d\n", i);
    i++;
  } while (i < ITERATIONS);

  return 0;
}
