// hello world
#include <cs50.h>
#include <stdio.h>

int main() {
  float x = get_float("x: ");
  float y = get_float("y: ");

  float z = x / y;
  printf("%f\n", z);
}
