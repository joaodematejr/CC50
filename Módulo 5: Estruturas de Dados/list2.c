#include <cs50.h>
#include <stdio.h>

int main(void) {
    int * list = malloc(3 * sizeof(int));
    if (list == NULL) {
        return 1;
    }

    /* list[0] = 4;
    list[1] = 5;
    list[2] = 6; */
    *list = 4;
    *(list + 1) = 5;
    *(list + 2) = 6;

    int *tmp = malloc(4 * sizeof(int));

    if (tmp == NULL) {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        tmp[i] = list[i];
    }

    tmp[3] = 7;
    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++) {
        printf("%i ", list[i]);
    }

    int *tmp = realloc(list, 4 * sizeof(int));
    
    if (tmp == NULL) {
        free(list);
        return 1;
    }

    list = tmp;


    free(list);


    //parei 1:00:29 do video

}

//printer file documents



