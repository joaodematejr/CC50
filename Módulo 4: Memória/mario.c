#include <stdio.h>
#include <stdlib.h>

void draw(int height) ;

int main(void) {
 int height = 8;
 draw(height);
}

void draw(int height) {
 for (int i = 0; i < height; i++) {
     for (int j = 0; j < i + 1; j++) {
         printf("#");
     }
     printf("\n");
    }
}