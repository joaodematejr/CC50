// hello world
#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);

int main(void) {
  int i = get_positive_int();
  printf("%i is a positive integer \n", i);
}

int get_positive_int(void) {
  int n;
  do {
    n = get_int("Positive Integer: ");
  } while (n < 1);
  return n;
}

// ide.cs50.io