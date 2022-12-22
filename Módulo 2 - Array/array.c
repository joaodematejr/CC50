#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;

int main(void) {

  int scores[TOTAL];
  for (int i = 0; i < TOTAL; i++) {
  x:
    scores[i] = get_int("Score: ");
    if (scores[i] < 0 || scores[i] > 100) {
      printf("Invalid score. Try again.\n");
      goto x;
    }
  }
  printf("Average: %i ", average(TOTAL, scores));
}

float average(int length, int array[]) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += array[i];
  }
  return sum / (float)length;
}
