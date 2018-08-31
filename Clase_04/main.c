#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

int main()
{
    char caracter;
    if(utn_getCaracter(&caracter,"caracter?","ERROR, REINGRESE caracter:",'A','z',2)==0)
    {
    printf("EL caracter es : %c",caracter);
    }
    return 0;

}


