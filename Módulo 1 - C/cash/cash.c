#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void) {

  int c25 = 0;
  int c10 = 0;
  int c5 = 0;
  int c1 = 0;

  float n;
  do {
    n = get_float("Change: ");
  } while (n < 0);

  int cents = round(n * 100);

  c25 = cents / 25;
  c10 = (cents - (c25 * 25)) / 10;
  c5 = (cents - (c25 * 25) - (c10 * 10)) / 5;
  c1 = cents - (c25 * 25) - (c10 * 10) - (c5 * 5);

  printf("%i\n", c25 + c10 + c5 + c1);
}