#include "scanner.h"

void get_token() {
    char* cadena = malloc(256);

    char caracter = getchar();

    int i = 0;

    while (caracter) {
        switch (clasificar_caracter(caracter)) {
            case SEP:
                printf("Separador: %c\n", caracter);

                break;
            case CAD:
                cadena[i] = caracter;  

                i++;

                caracter = getchar();

                if (clasificar_caracter(caracter) == SEP || caracter == '\n' || isspace(caracter)) {
                    printf("Cadena: %s\n", cadena); 

                    memset(cadena, 0, 256);
                    
                    i = 0;
                } 

                ungetc(caracter, stdin);

                break;
            case FDT:
                printf("Fin de texto: %c\n", caracter);

                caracter = 0;

                break;
        }

        if (caracter) 
            caracter = getchar();
    }
}

int clasificar_caracter(char caracter) {
    if (caracter == ',')
        return SEP;
    else if (!isspace(caracter) && caracter != EOF) // El caracter es parte de una cadena
        return CAD;
    else if (!isspace(caracter))
        return FDT;
}