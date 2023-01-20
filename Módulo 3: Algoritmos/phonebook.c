#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  string name;
  string number;
} person;

const int MAX_PEOPLE = 10;

int main(void) {

  person people[MAX_PEOPLE];

  for (int i = 0; i < MAX_PEOPLE; i++) {
    people[i].name = get_string("Name: ");
    people[i].number = get_string("Number: ");
  }

  people[0].name = "David";
  people[0].number = "123-456-7890";

  people[1].name = "Brian";
  people[1].number = "098-765-4321";

  for (int i = 0; i < 2; i++) {
    if (strcmp(people[i].name, "David") == 0) {
      printf("%s is %s \n", people[i].name, people[i].number);
      return 0;
    }
  }
  printf("Not found \n");
  return 1;
}