#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int k = atoi(argv[1]);

  char A = 'A';
  char a = 'a';

  printf("Insira o texto para criptografar: \n");
  string p = GetString();

  for (int i = 0, n = strlen(p); i < n; i++) {
    if (p[i] == 32) {
      printf("%c", p[i]);

    } else if (p[i] < 97) {

      int Pi = p[i] - ((int)A);

      int Ci = ((Pi + k) % 26) + ((int)A);

      printf("%c", Ci);

    } else {
      int Pi = p[i] - ((int)a);
      int Ci = ((Pi + k) % 26) + ((int)a);
      printf("%c", Ci);
    }
  }
  printf("\n");

  return 0;
}