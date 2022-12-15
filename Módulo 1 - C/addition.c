// hello world
#include <cs50.h>
#include <stdio.h>

int main() {
  int x = get_int("x: ");
  int y = get_int("y: ");

  /* int x = get_long("y: "); */
  /* int y = get_long("y: "); */
  
  printf("x + y = %i + %i = %i \n", x, y, x + y);
}
