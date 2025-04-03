// Avila Flores Ahmed
//Practica 8 estructuras de repeticion

int main() 
{
    int sum = 0, cont = 0, n;
    
    do 
    {
        printf("ingrese un numero: ");
        scanf("%d", &n);
    
        sum = sum + n;
        cont = cont + 1;
    
    } 
    while (cont<10 && sum<= 100);
    if (cont == 10)
        printf("se han introducido 10 numeros. \n");
    else
        printf("la suma de los numeos intrducidos supero 100. \n");
    
    return 0;
}
