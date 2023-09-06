#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return (1);
    }

    const char *rexfile = argv[1];
    FILE *file = fopen(rexfile, "w");

    if (file == NULL) {
        perror("Error opening file");
        return (1);
    }

    fprintf(file, "%s\n", "Hello, world it's me hi chid its working right?");
    fclose(file);

    return (0);
}