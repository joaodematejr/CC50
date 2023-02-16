#include <stdio.h>

int main(void) {
    int n = 50;
    int *p = &n;
    printf("n = %i is stored at %p in memory \n", n, &n); 
    return 0;   
}