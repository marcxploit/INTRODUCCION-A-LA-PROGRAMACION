/*
Alumno: Marco Antonio García Bautista
Número de cuenta: 305027731
Licenciatura: Informática
Materia: Introducción a la programación
Descripción del programa: 
Programa que acepta el ingreso de dos números y utiliza una función para obtener su suma.
*/

#include <stdio.h>
int main() {
	while(1){
		int numero1; //definimos la variable numero1 del tipo entero
		int numero2; //definimos la variable numero2 del tipo entero
		int resultado; //definimos la variable resultado del tipo entero
    
    	printf("Captura el primer número a sumar: ");
    	scanf("%d", &numero1); //obtenemos el valor capturado y se lo asignamos a la variable numero1
    
    	printf("Captura el segundo número a sumar: ");
    	scanf("%d", &numero2); //obtenemos el valor capturado y se lo asignamos a la variable numero2
    
    	resultado = Suma(numero1, numero2); //asignamos el valor de la variable resultado a partir del valor devuelto por la función Suma
       	printf("El resultado de la suma de %d y %d es: %d\n\n", numero1, numero2, resultado);
	}
    return 0;
}

//la función suma recibe 2 parametros que son 2 números del tipo entero, los suma y devuelve el sumando del tipo entero también
int Suma(int numero1, int numero2) {
    int suma = numero1 + numero2;
    return suma;
}







