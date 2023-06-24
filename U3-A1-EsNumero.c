/*
Alumno: Marco Antonio García Bautista
Número de cuenta: 305027731
Licenciatura: Informática
Materia: Introducción a la programación
Descripción del programa: 
Programa que determina si un caracter introducido por el usuario es una letra o un número.
*/

#include <stdio.h>

int main() {
	while (1) { // Bucle para que el programa no termine 
		char caracter; //definimos la variable caracter del tipo char
    
		printf("Captura un caracter: "); //solicitamos que el usuario capture el carácter
    	scanf("%c", &caracter); //leemos el dato capturado 
	
		caracter = toupper(caracter); //convertimos el caracter a mayúscula solo para fines prácticos, así evitamos un caso de la sentencia if
	
		if (caracter >= 'A' && caracter <= 'Z') { //si caracter está entre A y Z 
        	printf("%c es una letra.\n", caracter);
    	} else if (caracter >= '0' && caracter <= '9') { //si caracter está entre 0 y 9
        	printf("%c es un número.\n", caracter);
    	} else {
        	printf("%c no es una letra ni un número.\n", caracter);
    	}
	}
	return 0;
}








