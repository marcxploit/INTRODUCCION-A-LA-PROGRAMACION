/*
- Alumno: Marco Antonio Garc�a Bautista
- N�mero de cuenta: 305027731
- Licenciatura: Inform�tica
- Materia: Introducci�n a la programaci�n
- Descripci�n del programa: 
	Programa para imprimir las direcciones de memoria de cinco n�meros ingresados.
*/

#include <stdio.h>
#include <stdlib.h> // Incluir la biblioteca para malloc y free

int main() {
    int *numeros; //Declaramos num como un apuntador a entero
    
    //solicitamos la captura de 5 n�meros
	printf("Captura cinco n�meros (los que m�s te gusten):\n");

    /* 
	Utilizamos malloc para reservar din�micamente memoria para el arreglo de enteros, 
	malloc toma como argumento el tama�o total de memoria que se requiere
    */
	numeros = (int*)malloc(5 * sizeof(int));

    //Verificamos si malloc pudo asignar la memoria exitosamente (si el puntero numeros es NULL, entonces hubo un error)
    if (numeros == NULL) {
        printf("Error: No se pudo asignar memoria din�mica.\n");
        return 0; 
    }

    //leemos los datos capturados y los asignamos al arreglo numeros 
	int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]); 
    }

    for (i = 0; i < 5; i++) {
    	//imprimimos en pantalla los n�meros capturados y sus direcciones en memoria 
        printf("N�mero: %d, direcci�n de memoria: %p \n", numeros[i], (void*)&numeros[i]); 
        //La funci�n void* se usa para mostrar la direcci�n en formato hexadecimal
    }
	
    /*Despu�s de utilizar el arreglo, utilizamos free para liberar la memoria asignada din�micamente 
	y evitar para evitar desperdicio de memoria y posibles problemas de rendimiento
    */
	free(numeros);
    return 0;
}

