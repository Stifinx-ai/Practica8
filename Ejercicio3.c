//Ávila Flores Ahmed
// ejercicio3
//programa que pida al usuario un número, y muestre el mensaje "has introducido el numero ---"... mostrar la suma de los números y la cantidad de números introducidos.

#include <stdio.h>

int main() 
{
    int numero;
    int contador = 0;
    int suma = 0;

    do 
    {
        printf("Introduce un número (0 para salir): ");
        scanf("%d", &numero);

        if (numero != 0) 
        {
            printf("Has introducido el número %d\n", numero);
            contador++;
            suma += numero;
        }
    } 
    while (numero != 0);

    printf("Finalizando: Se ha introducido el número 0\n");
    printf("Total de números introducidos: %d\n", contador);
    printf("Suma de los números introducidos: %d\n", suma);

    return 0;
}
