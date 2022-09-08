#include <stdio.h>
#include <stdlib.h>

int validate(int input, int min, int max) {
  if (input < max && input > min) {
    printf("True\n");
  } else printf("False\n");
}

int main(void) {
  validate(2, 5, 8);
  validate(7, 1, 10);
  validate(4, 12, 20);
  validate(11, 8, 14);
}
