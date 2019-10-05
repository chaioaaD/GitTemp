#include <stdio.h>

float mult(float one, float two) {
	printf("Parabens, voce usou a funcao de multiplicacao");
	return one*two;
}


int main() {
  float n1, n2;
  printf("Escreva o primeiro numero: ");
  scanf("%f", &n1);
  printf("Escreva o segundo numero: ");
  scanf("%f", &n2);
  printf("Os numeros sao %.4f, %.4f\n", n1, n2);
  return 0;
}
