#include <stdio.h>

int factorial(int number) {
  if (number == 0 || number == 1)
    return 1;
  else
    return number * factorial(number - 1);
}

int main(void) {
  printf("factorial(0) = %d\n", factorial(0));
  printf("factorial(1) = %d\n", factorial(1));
  printf("factorial(2) = %d\n", factorial(2));
  printf("factorial(3) = %d\n", factorial(3));
  printf("factorial(4) = %d\n", factorial(4));
  printf("factorial(5) = %d\n", factorial(5));
  printf("factorial(6) = %d\n", factorial(6));

  return 0;
}
