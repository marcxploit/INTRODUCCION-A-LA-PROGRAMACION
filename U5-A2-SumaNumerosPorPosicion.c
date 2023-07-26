/*
Alumno: Marco Antonio Garc�a Bautista
N�mero de cuenta: 305027731
Licenciatura: Inform�tica
Materia: Introducci�n a la programaci�n
Descripci�n del programa: 
Programa que determina la suma de los n�meros de posici�n par de la cifra 1257851

*/

#include <stdio.h>

int main() {
	
	//creamos un arreglo del tipo entero con los n�meros de las cifras  
    int cifras[] = {1, 2, 5, 7, 8, 5, 1}; 
    
    int longitudArreglo = sizeof(cifras) / sizeof(cifras[0]);  //obtenemos la longitud del arreglo
    printf("Longitud del arreglo: %d\n", longitudArreglo); 
    
    /*
	sizeof(miArreglo) devuelve el tama�o total del arreglo en bytes y sizeof(miArreglo[0]) devuelve el tama�o en bytes de un solo elemento del arreglo. 
	La divisi�n de ambos valores nos da el n�mero de elementos o longitud del arreglo, es importante tener la longitud del arreglo 
	debido a que C no comprueba el tama�o de los arreglos y as� evitamos un incorrecto funcionamiento del programa por un desbordamiento de array 
	*/
    
	
    int suma = 0; //definimos la variable suma de tipo entero y un valor inicial de cero
 	/*
	Recorremos el arreglo de 2 en 2 para obtener los valores en las posiciones pares para sumarlos, 
	esto es basados en la longitud del arreglo obtenida. 
   */
	int i;
    for (i = 0; i < longitudArreglo; i += 2) { //Iniciamos el recorrido desde la posici�n cero debido a que tambi�n es par
        suma += cifras[i];
    }

    printf("La suma total de los n�meros con pisici�n par es: %d\n", suma); //imprimimos en pantalla el resultado
    return 0;
}




