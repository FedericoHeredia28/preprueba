// Escribir una funcion en C print_menu() que acepte como argumento un array de strings e imprima
// un menu en pantalla con las opciones de un menu usando los valores del array. Imprimir las opciones
// numeradas desde el uno en el orden que aparecen en el array.
#include <stdio.h>
#include <stdlib.h>
// ciencia de la computacion exactas
void print_menu(char *array[]) {
  int choice;
  // int i = 0;
  while (1) {
    for (int i = 0; i < 4; i++) {
    printf("%d-%s\n", i+1, array[i]);
  }
  scanf("%d ", &choice);
  switch (choice) {
    case 1:
    printf("\n");
    printf("Furry.\n");
    printf("\n");
    break;
    case 2:
    printf("\n");
    printf("Trolo.\n");
    printf("\n");
    break;
    case 3:
    printf("\n");
    printf("Tocanenas.\n");
    printf("\n");
    break;
    case 4:
    exit(0);
    break;
    default:
    printf("\n");
    printf("Elegí una opcion válida\n");
    printf("\n");
    break;
  }
}
}

int main(void) {
  char *array[4] = {
    "Thiago?",
    "Byron?",
    "Chubi?",
    "Salir del menu."
  };
  print_menu(array);
}
