#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint64_t factorial(int number) {
  if (number == 0 || number == 1) {
    return 1;
  } else {
    return number * factorial(number - 1);
  }
}

int main() {
  int number;

  printf("Whose factorial? ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Factorial of a negative number in undefined.\n");
    exit(1);
  } 

  printf("%d! = %llu\n", number, factorial(number));

  return 0;
}

