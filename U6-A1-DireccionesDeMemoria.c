/*
- Alumno: Marco Antonio García Bautista
- Número de cuenta: 305027731
- Licenciatura: Informática
- Materia: Introducción a la programación
- Descripción del programa: 
	Programa para imprimir las direcciones de memoria de cinco números ingresados.
*/

#include <stdio.h>
#include <stdlib.h> // Incluir la biblioteca para malloc y free

int main() {
    int *numeros; //Declaramos num como un apuntador a entero
    
    //solicitamos la captura de 5 números
	printf("Captura cinco números (los que más te gusten):\n");

    /* 
	Utilizamos malloc para reservar dinámicamente memoria para el arreglo de enteros, 
	malloc toma como argumento el tamaño total de memoria que se requiere
    */
	numeros = (int*)malloc(5 * sizeof(int));

    //Verificamos si malloc pudo asignar la memoria exitosamente (si el puntero numeros es NULL, entonces hubo un error)
    if (numeros == NULL) {
        printf("Error: No se pudo asignar memoria dinámica.\n");
        return 0; 
    }

    //leemos los datos capturados y los asignamos al arreglo numeros 
	int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]); 
    }

    for (i = 0; i < 5; i++) {
    	//imprimimos en pantalla los números capturados y sus direcciones en memoria 
        printf("Número: %d, dirección de memoria: %p \n", numeros[i], (void*)&numeros[i]); 
        //La función void* se usa para mostrar la dirección en formato hexadecimal
    }
	
    /*Después de utilizar el arreglo, utilizamos free para liberar la memoria asignada dinámicamente 
	y evitar para evitar desperdicio de memoria y posibles problemas de rendimiento
    */
	free(numeros);
    return 0;
}

