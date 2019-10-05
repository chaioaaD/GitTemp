#include <stdio.h>

int main() {
  float n1, n2;
  printf("Escreva o primeiro numero: ");
  scanf("%f", &n1);
  printf("Escreva o segundo numero: ");
  scanf("%f", &n2);
  printf("Os numeros sao %.4f, %.4f\n", n1, n2);
  return 0;
}

float add(int n1, int n2) {
  return n1 + n2;
}
