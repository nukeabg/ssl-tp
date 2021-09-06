#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

enum Token
{
    FDT,
    SEP,
    CAD
};

int get_token();
int formaCadena(char caracter);
char buffer[256];