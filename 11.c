// Escribir una funcion en C para comparar si dos strings son iguales.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void compare(char *String1, char *String2) {
  if( !strcmp(String1, String2) == true) {
    printf("Son iguales\n");
  } else printf("No son iguales\n");
}

int main(int argc, char *argv[]) {
  char *String1 = "Strings";
  char *String2 = "Strings";
  compare(String1, String2);
}
