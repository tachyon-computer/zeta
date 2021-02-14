#include <stdio.h>

int main(void) {
  const int ITERATIONS = 10;

  for (int i = 0; i < ITERATIONS; i++)
    printf("iteration %d\n", i);

  return 0;
}
