#include <stdio.h>
#include <stdlib.h>

int PedirEdad();
int ValidarEdad(int edad, int minimo, int maximo);


int main()
{
    int edad;

    edad=PedirEdad();
    printf("Le edad es %d",edad);


}
int PedirEdad()
{
        int edad;

        printf("Cual es tu edad?");
        scanf("%d",&edad);
        edad=ValidarEdad(edad,1,100);
        return edad;
}
int ValidarEdad(int edad, int minimo, int maximo)
{
    int contador;
    contador = 0;
    while((edad < minimo || edad > maximo )&& contador <= 3)
    {
      contador++;
      printf("Ingrese su edad nuevamente");
      scanf("%d",&edad);
    }
    if(contador == 3)
    {
        edad = -1;
    }
    return edad;
}




