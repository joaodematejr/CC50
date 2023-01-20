#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *s = mall;  oc(3);
    s[0] = 'H';
    s[1] = 'i';
    s[1] = '!';
    s[3] = '\0';
    printf("%s ", s);
    free(s);
    return 0;
}