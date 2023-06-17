#include <stdio.h>

//Alumno: Marco Antonio García Bautista
//Número de cuenta: 305027731
//Licenciatura: Informática
//Materia: Introducción a la Programación
//Descripción: Programa en C que determina si dos números introducidos por el usuario son iguales

int main()
{
    int numero1 = 0; // definimos la variable numero1 como entero y lo inicializamos con el valor 0
    int numero2 = 0; // definimos la variable numero2 como entero y lo inicializamos con el valor 0
    
    // Mostramos las instrucciones en pantalla
    printf("INSTRUCCIONES: Captura 2 números ENTEROS y yo te diré si son iguales.\n");
    printf("¿Estás listo? ¡Vamos!\n\n");
    
    printf("Captura el primer número: "); // Solicitamos que el usuario capture el número 1

    // Creamos un bucle para numero1 para validar que scanf devuelva 1, por lo que no se terminará a menos que el valor capturado por el usuario sea un número válido
    while (scanf("%d", &numero1) != 1)
    {
        printf("Captura un número entero para continuar: ");
        while (getchar() != '\n'); // getchar() Limpia el búfer de entrada, descarta el valor no válido y permite solicitarlo nuevamente
    }

    printf("Captura el segundo número: "); // Solicitamos que el usuario capture el número 2
    
	// Creamos un bucle para numero2 para validar que scanf devuelva 1, por lo que no se terminará a menos que el valor capturado por el usuario sea un número válido
    while (scanf("%d", &numero2) != 1)
    {
        printf("Captura un número entero para continuar: ");
        while (getchar() != '\n');// getchar() Limpia el búfer de entrada y descarta el valor no válido y permite solicitarlo nuevamente 
    }
    if (numero1 != numero2)
    {
        printf("¡Ni Dios lo quiera! %d no es igual a %d", numero1, numero2);
    }
    else
    {
        printf("¡Muy bien! Los números son iguales");
    }
    
	getch(); 
}
