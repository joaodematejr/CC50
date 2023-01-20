#include <stdint.h>
#include <stdio.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
    //CHECK USAGE
    if (argc != 2) {
        printf("Usage: ./recover image");
        return 1;
    }

    //OPEN MEMORY CARD
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open %s.", argv[1]);
        return 1;
    }

    // READ FIRST THHREE BYTES
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, file);

    //CHECK IF FIRST THREE BYTES
    if (bytes[0] != 0xff || bytes[1] != 0xd8 || bytes[2] != 0xff) {
        printf("File is not a JPEG.");
        return 1;
    }else {
        printf("File is a JPEG.");
    }

    //CLOSE MEMORY CARD
    
    BYTE buffer;
    while (fread(&buffer, sizeof(BYTE), 1, file)) {
       fwrite(&buffer, sizeof(BYTE), 1, destination);
    }

    fclose(file);
    fclose(destination);
    return 0;

}