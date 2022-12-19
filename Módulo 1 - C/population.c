#include <cs50.h>
#include <stdio.h>

int main(void) {
  // TODO: Solicite o valor inicial ao usuário
  int n;
  do {
    n = get_int("Inteiro positivo: ");
  } while (n < 1);

  // TODO: Solicite o valor final ao usuário
  printf("O número é %i\n", n);
  // TODO: Calcule o número de anos até o limite

  // TODO: Imprima o número de anos
}