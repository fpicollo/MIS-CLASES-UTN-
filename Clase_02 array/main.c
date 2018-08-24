#include <stdio_ext.h>
#include <stdlib.h>
#define LIMITE_ARRAY 3  //ES UNA MACRO, CAMBIA EN TODOS LADOS. REMPLAZADO EN NUERMO.

int main()
{
    int numero[LIMITE_ARRAY]; // 0 - 1 - 2
    int numeroMaximo;
    int numeroMinimo;
    int i; //i vale 0, por eso los + 1

    for(i=0;i<LIMITE_ARRAY;i++)
    {
    printf("\nNumero %d:",i+1);
    while (scanf("%d",&numero[i]) != 1)
    {
            printf("\nError Ingrese el primer numero:");
            __fpurge(stdin);
    }
    if(i==0)
    {
    numeroMaximo = numero[i];
    numeroMinimo = numero[i];
    }
    else if (numero[i] > numeroMaximo)
    {
        numeroMaximo = numero[i];
    }
    else if (numero[i] < numeroMinimo)
    {
        numeroMinimo = numero[i];
    }
    }
    printf("Max: %d - Min: %d", numeroMaximo, numeroMinimo);


    for(i=0;i<LIMITE_ARRAY;i++)
    {
        if(numero[i] > numeroMinimo && numero[i] < numeroMaximo)
        {
            printf("\nEl del medio %d", numero[i]);
            break;
        }
    }
}
