#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *file = fopen("phonebook.csv", "r");
    if (file == NULL) {
        return 1;
    }

    char *name = "Brian";
    char *number = "48999422086";

    fprintf(file, "%s,%s \n", name, number);

    fclose(file);
   
    return 0;
}