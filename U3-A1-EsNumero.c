/*
Alumno: Marco Antonio Garc�a Bautista
N�mero de cuenta: 305027731
Licenciatura: Inform�tica
Materia: Introducci�n a la programaci�n
Descripci�n del programa: 
Programa que determina si un caracter introducido por el usuario es una letra o un n�mero.
*/

#include <stdio.h>

int main() {
	while (1) { // Bucle para que el programa no termine 
		char caracter; //definimos la variable caracter del tipo char
    
		printf("Captura un caracter: "); //solicitamos que el usuario capture el car�cter
    	scanf("%c", &caracter); //leemos el dato capturado 
	
		caracter = toupper(caracter); //convertimos el caracter a may�scula solo para fines pr�cticos, as� evitamos un caso de la sentencia if
	
		if (caracter >= 'A' && caracter <= 'Z') { //si caracter est� entre A y Z 
        	printf("%c es una letra.\n", caracter);
    	} else if (caracter >= '0' && caracter <= '9') { //si caracter est� entre 0 y 9
        	printf("%c es un n�mero.\n", caracter);
    	} else {
        	printf("%c no es una letra ni un n�mero.\n", caracter);
    	}
	}
	return 0;
}








