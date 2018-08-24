#include <stdio_ext.h>
#include <stdlib.h>
#define LIMITE_ARRAY 5  //ES UNA MACRO, CAMBIA EN TODOS LADOS. REMPLAZADO EN NUERMO.

int main()
{
    int numero[LIMITE_ARRAY];
    float promedio = 0;
    int i;

    for(i=0;i<LIMITE_ARRAY;i++)
    {
        printf("\nNumero %d:",i+1);
        while (scanf("%d",&numero[i]) != 1)
        {
            printf("\nError Re ingrese el numero:");
            __fpurge(stdin);
        }
        promedio = promedio + numero[i];
    }
    printf("El promedio es %f",promedio / LIMITE_ARRAY);




    return 0;
}
