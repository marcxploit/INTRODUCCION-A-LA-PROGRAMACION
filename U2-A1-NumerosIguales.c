#include <stdio.h>

//Alumno: Marco Antonio Garc�a Bautista
//N�mero de cuenta: 305027731
//Licenciatura: Inform�tica
//Materia: Introducci�n a la Programaci�n
//Descripci�n: Programa en C que determina si dos n�meros introducidos por el usuario son iguales

int main()
{
    int numero1 = 0; // definimos la variable numero1 como entero y lo inicializamos con el valor 0
    int numero2 = 0; // definimos la variable numero2 como entero y lo inicializamos con el valor 0
    
    // Mostramos las instrucciones en pantalla
    printf("INSTRUCCIONES: Captura 2 n�meros ENTEROS y yo te dir� si son iguales.\n");
    printf("�Est�s listo? �Vamos!\n\n");
    
    printf("Captura el primer n�mero: "); // Solicitamos que el usuario capture el n�mero 1

    // Creamos un bucle para numero1 para validar que scanf devuelva 1, por lo que no se terminar� a menos que el valor capturado por el usuario sea un n�mero v�lido
    while (scanf("%d", &numero1) != 1)
    {
        printf("Captura un n�mero entero para continuar: ");
        while (getchar() != '\n'); // getchar() Limpia el b�fer de entrada, descarta el valor no v�lido y permite solicitarlo nuevamente
    }

    printf("Captura el segundo n�mero: "); // Solicitamos que el usuario capture el n�mero 2
    
	// Creamos un bucle para numero2 para validar que scanf devuelva 1, por lo que no se terminar� a menos que el valor capturado por el usuario sea un n�mero v�lido
    while (scanf("%d", &numero2) != 1)
    {
        printf("Captura un n�mero entero para continuar: ");
        while (getchar() != '\n');// getchar() Limpia el b�fer de entrada y descarta el valor no v�lido y permite solicitarlo nuevamente 
    }
    if (numero1 != numero2)
    {
        printf("�Ni Dios lo quiera! %d no es igual a %d", numero1, numero2);
    }
    else
    {
        printf("�Muy bien! Los n�meros son iguales");
    }
    
	getch(); 
}
