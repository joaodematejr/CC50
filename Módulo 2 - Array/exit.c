#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[]) {
  if (argc != 2) {
    printf("Usage: ./exit <name> \n");
    return 1;
  }
  printf("hello, %s\n", argv[1]);
}