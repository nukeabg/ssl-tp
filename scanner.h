#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

enum Token { 
    FDT, 
    SEP, 
    CAD 
};

void get_token();
int clasificar_caracter(char caracter);
