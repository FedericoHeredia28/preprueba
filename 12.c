// 12. Escribir una funcion en C para invertir el orden de un string.
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 0;
  while (String[i] != '\n') {
    i++;
  }
}


// int count(char *String) {
  // return i;
// }
void invert_string(char *String) {
  // i = 5;
  while (i != -1) {
    printf("%c", String[i]);
    i--;
  }
  printf("\n");
}


int main(void) {
  char *String = "Stuff";
  count(String);
  invert_string(String);
}
