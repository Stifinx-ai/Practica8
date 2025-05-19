//Avila Flores Ahmed
// practica 8 estructuras de repetición


#include <stdio.h>

int main() 
{
    int n, count_par = 0, count_impar = 0;
    int ultimo_par = 0, ultimo_impar = 0;
    
    printf("ingrese valor de n: ");
    scanf("%d , &n");
    
    int numero = 0;
    while (count_par < n) 
    {
        if (numero%2 == 0) 
        {
            ultimo_par = numero;
            count_par++;
        }
        numero++;
    }
    
    numero = 1;
    while (count_impar < n) 
    {
        if (numero%2 == 0) 
        {
            ultimo_impar = numero;
            count_impar++;
        }
        numero++;
    }
    
    printf("ultimo numero par: %d\n", ultimo_par);
    printf("ultimo numero impar: %d\n", ultimo_impar);
    
    return 0;
}
