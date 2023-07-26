/*
Alumno: Marco Antonio García Bautista
Número de cuenta: 305027731
Licenciatura: Informática
Materia: Introducción a la programación
Descripción del programa: 
Programa que determina la suma de los números de posición par de la cifra 1257851
*/

#include <stdio.h>
#include <stdbool.h>

// Función para leer los elementos capturados de una matriz de 2x2,
//esta función solicita los números uno por uno indicando el elemento en el arreglo al que corresponde
void LeerMatrizCapturada(int matriz[2][2]) {
	int i = 0;
	int j = 0;    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Captura el elemento (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }  
}

/* Función para comparar si dos matrices de 2x2 son iguales, 
recorremos los valores de las matrices uno por uno y los compara, retorna el valor booleano false si al comparar 2 elementos son diferentes,
si no hay valores diferentes devuelve true
*/
bool MatricesIguales(int matriz1[2][2], int matriz2[2][2]) {
	int i = 0;
	int j = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            if (matriz1[i][j] != matriz2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
	//definimos 2 matrices de 2x2 y de tipo entero cada una
    int matriz1[2][2]; 
    int matriz2[2][2];

	//solicitamos la captura de los valores para la matriz 1
    printf("Captura los elementos de la primera matriz:\n"); 
    
    LeerMatrizCapturada(matriz1);

	//solicitamos la captura de los valores para la matriz 2
    printf("Captura los elementos de la segunda matriz:\n");
    
    //ejecutamos la función LeerMatrizCapturada para comparar los valores capturados
    LeerMatrizCapturada(matriz2);

	
    if (MatricesIguales(matriz1, matriz2)) {
    	//si la función devuelve true
        printf("¡Las matrices son iguales! :D \n");
    } else {
    	//si la función devuelve false 
        printf("Las matrices son diferentes :'( \n");
    }

    return 0;
}

