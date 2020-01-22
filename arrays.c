#include <stdio.h>

int main(int argc, char const *argv[]) {
  int j, i=0, a[2];

for ( i = 0; i < 2; i++) {
  printf("Ingrese el numero %d: ", i);
  scanf("%d", &a[i]);
}
for (i = 0; i < 2; i++) {
printf("Usted ingreso [%d]\n", a[i]);
}



  return 0;
}
