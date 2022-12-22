#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void) {
  string s = get_string("Name: ");
  printf("Output: ");
  for (int i = 0; s[i]< strlen(s); i++) {
    printf("%c", s[i]);
  }
  printf("\n");
}