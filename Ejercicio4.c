//Ávila Flores Ahmed
// ejercicio4
//programa que solicite números al usuario hasta que se hayan introducido 10 números o la suma de todos los números leídos sea mayor que 100.

#include <stdio.h>

int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;

    while (contador < 10 && suma <= 100) 
    {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        suma += numero;
        contador++;
    }


        if (contador == 10) 
    {
        printf("Se han introducido 10 números.\n");
    } 
        else if (suma > 100) 
    {
        printf("La suma de los números introducidos ha superado 100.\n");
    }


    printf("Cantidad de números introducidos: %d\n", contador);
    printf("Suma total: %d\n", suma);

    return 0;
}
