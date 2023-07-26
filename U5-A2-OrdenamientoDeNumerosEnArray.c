/*
Alumno: Marco Antonio Garc�a Bautista
N�mero de cuenta: 305027731
Licenciatura: Inform�tica
Materia: Introducci�n a la programaci�n
Descripci�n del programa: 
Programa que ordena 20 n�meros almacenados en un arreglo
*/

#include <stdio.h>

// Funci�n para intercambiar dos elementos
void intercambiaElementos(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	//definimos un arreglo de tipo entero de loingitud 20  
	int arreglo[20] = {1, 2, 5, 7, 8, 9995, -1, 3, 4, 44, -2, 33, 22, 332, 0, 12, 21, -200, 55}; 
    
    //obtenemos la longitud del arreglo, en este caso el valor debe ser 20 pero en caso de que no lo sea evitamos errores futuros
    int longitudArreglo = sizeof(arreglo) / sizeof(arreglo[0]);  
   
    // Ordenamos el arreglo utilizando el algoritmo de burbuja
    
    int i = 0;
	int j = 0;
    for (i = 0; i < longitudArreglo - 1; i++) {
        for (j = 0; j < longitudArreglo - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                intercambiaElementos(&arreglo[j], &arreglo[j + 1]);
            }
        }
    }
    /*
	Este algoritmo realiza el ordenamiento o reordenamiento de una lista a de n valores, en este caso de n t�rminos numerados del 0 al n-1; 
	consta de dos bucles anidados, uno con el �ndice i, que da un tama�o menor al recorrido de la burbuja en sentido inverso de 2 a n, 
	y un segundo bucle con el �ndice j, con un recorrido desde 0 hasta n-i, para cada iteraci�n del primer bucle, que indica el lugar de la burbuja.

	La burbuja son dos t�rminos de la lista seguidos, j y j+1, que se comparan: si el primero es mayor que el segundo sus valores se intercambian.

	Esta comparaci�n se repite en el centro de los dos bucles, dando lugar a una lista ordenada.
    */
    
    

    // Mostramos los elementos del nuevo arreglo los cuales ya est�n ordenados 
    printf("Arreglo ordenado:\n");
    i = 0;
    for (i = 0; i < longitudArreglo; i++) {
        printf("%d, ", arreglo[i]);
    }
   

    return 0;
}


