// Escribir una funci ́on en C para pasar un string a minusculas.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void to_lower(char *String) {
  int i = 0;
  while (i != '\n') {
    int n = tolower(String[i]);
    i++;
    printf("%c", n);
  }
  printf("\n");
}



int main(void) {
  char *String = "AMAAMMA";
  to_lower(String);
}
