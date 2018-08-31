#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"

static void myFpurge()
{
    __fpurge(stdin);
    //fflush(stdin);
}

static int getInt(int* numeroIngresado)
{
    myFpurge();
    return scanf("%d",&numeroIngresado);
}
static int getChar(char* caracterIngresado)
{
    myFpurge();
    return scanf("%c",&caracterIngresado);
}
static int getFloat(float* numeroIngresado)
{
    myFpurge();
    return scanf("%f",&numeroIngresado);
}
static int getString(char textoIngresado)
{
    myFpurge();
    return scanf("%s",textoIngresado);
}


int utn_getNumero(      int* pResultado,
                    char mensaje[],
                    char mensajeError[],
                    int minimo,
                    int maximo,
                    int reintentos)
{
    int numeroIngresado;

    while(reintentos>0)
    {
        printf("%s",mensaje);
        if(scanf("%d",&numeroIngresado) == 1)
        {

            if(numeroIngresado<=maximo && numeroIngresado>=minimo)
            {
            *pResultado = numeroIngresado;
            return 0;
            }
            else
            {
            printf("%s",mensajeError);

            reintentos--;
            }
        }
    }
 return -1;
}


int utn_getCaracter(char* pResultado,
                    char mensaje[],
                    char mensajeError[],
                    char minimo,
                    char maximo,
                    int reintentos)
{
    char caracterIngresado;

    while(reintentos>0)
    {
        printf("%s",mensaje);
        if(scanf("%c",&caracterIngresado) == 1)
        {

            if(caracterIngresado<=maximo && caracterIngresado>=minimo)
            {
            *pResultado = caracterIngresado;
            return 0;
            }
            else
            {
            printf("%s",mensajeError);

            reintentos--;

            }
        }
    }
 return -1;
}
