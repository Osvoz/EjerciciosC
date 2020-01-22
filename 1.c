#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i, a[10];
  printf("Intento de manejo de arrays\n");
  for (i = 0; i < 10; i++) {
    printf("Ingrese elemento %d: ", i+1);
    scanf("%d", &a[i]);
  }
  printf("Los numeros que ingreso son: \n");
for (i = 0; i < 10; i++) {
  printf("%d, ", a[i]);
}
printf("\n");
  return 0;
}
