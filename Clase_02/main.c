#include <stdio_ext.h>
#include <stdlib.h>

int main()
{
    int numero[3]; // 0 - 1 - 2
    int numeroMaximo;
    int numeroMinimo;
    int i; //i vale 0, por eso los + 1

    for(i=0;i<3;i++)
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


    for(i=0;i<3;i++)
    {
        if(numero[i] > numeroMinimo && numero[i] < numeroMaximo)
        {
            printf("El del medio %d", numero[i])
            break;
        }
    }

  /*



   printf("Numero 2:");
    while (scanf("%d",&sNumero) != 1)
    {
            printf("\nError Ingrese el segundo numero:");
            __fpurge(stdin);
    }

   if (sNumero > numeroMaximo)
   {
        numeroMaximo = sNumero;
   }
   else if (sNumero < numeroMinimo)
   {
        numeroMinimo = sNumero;
   }

      printf("Numero 3:");
    while (scanf("%d",&tNumero) != 1)
    {
            printf("\nError Ingrese el tercero numero:");
            __fpurge(stdin);
    }

   if (tNumero > numeroMaximo)
   {
        numeroMaximo = tNumero;
   }
   else if (tNumero < numeroMinimo)
   {
        numeroMinimo = tNumero;
   }

   printf("Max: %d - Min: %d", numeroMaximo, numeroMinimo);

   if (pNumero < numeroMaximo && pNumero > numeroMinimo)
   {
        printf("\nEs el del medio %d", pNumero);
   }
   if (sNumero < numeroMaximo && sNumero > numeroMinimo)
   {
        printf("\nEs el del medio %d", sNumero);
   }
   if (tNumero < numeroMaximo && tNumero > numeroMinimo)
   {
        printf("\nEs el del medio %d", tNumero);
   }

    return 0;
}
