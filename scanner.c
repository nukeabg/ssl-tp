#include "scanner.h"

int get_token() {
    char caracter = getchar();

    int i = 0;

    while (isspace(caracter)) {
        caracter = getchar();
    }

    if (formaCadena(caracter)) {
        do {
            buffer[i] = caracter;

            i++;

            caracter = getchar();
        } while (formaCadena(caracter));

        ungetc(caracter, stdin);

        return CAD;
    } else if (caracter == ',') {
        buffer[i] = caracter;

        return SEP;
    } else {
        return FDT;
    }
}

int formaCadena(char caracter) {
    return caracter != ',' && !isspace(caracter) && caracter != EOF;
}