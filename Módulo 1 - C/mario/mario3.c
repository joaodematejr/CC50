// hello world
#include <cs50.h>
#include <stdio.h>
int main(void) {
  int value = 10;
  for (int i = 0; i < value; i++) {
    for (int j = 0; j < value; j++) {
      printf("#");
    }
    printf("\n");
  }
}

// ide.cs50.io