/*
Alumno: Marco Antonio Garc�a Bautista
N�mero de cuenta: 305027731
Licenciatura: Inform�tica
Materia: Introducci�n a la programaci�n
Descripci�n del programa: 
Programa que acepta el ingreso de dos n�meros y utiliza una funci�n para obtener su suma.
*/

#include <stdio.h>
int main() {
	while(1){
		int numero1; //definimos la variable numero1 del tipo entero
		int numero2; //definimos la variable numero2 del tipo entero
		int resultado; //definimos la variable resultado del tipo entero
    
    	printf("Captura el primer n�mero a sumar: ");
    	scanf("%d", &numero1); //obtenemos el valor capturado y se lo asignamos a la variable numero1
    
    	printf("Captura el segundo n�mero a sumar: ");
    	scanf("%d", &numero2); //obtenemos el valor capturado y se lo asignamos a la variable numero2
    
    	resultado = Suma(numero1, numero2); //asignamos el valor de la variable resultado a partir del valor devuelto por la funci�n Suma
       	printf("El resultado de la suma de %d y %d es: %d\n\n", numero1, numero2, resultado);
	}
    return 0;
}

//la funci�n suma recibe 2 parametros que son 2 n�meros del tipo entero, los suma y devuelve el sumando del tipo entero tambi�n
int Suma(int numero1, int numero2) {
    int suma = numero1 + numero2;
    return suma;
}







