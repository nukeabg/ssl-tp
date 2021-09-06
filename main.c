#include "scanner.h"

int main(void) {
    enum Token token;

    do {
        token = get_token();

        switch (token) {
            case CAD:
                printf("Cadena: %s\n", buffer);
                break;
            case SEP:
                printf("Separador: %s\n", buffer);
                break;
            case FDT:
                printf("Fin de texto: %s\n", buffer);
                break;
        }
        memset(buffer, 0, 256);
    } while (token != FDT);
}