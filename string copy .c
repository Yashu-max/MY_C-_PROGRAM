#include <stdio.h>
#include <string.h>

int main() {
    char source[30] = "jai, karnataka";
    char destination[30];

    strcpy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
