/*
Alumno: Marco Antonio García Bautista
Número de cuenta: 305027731
Licenciatura: Informática
Materia: Introducción a la programación
Descripción del programa: 
Programa en C que transforma una calificación numérica a su equivalente en letra, siguiendo las siguientes reglas:
* Calificación menor a 6 equivale a 'NA'
* Calificación mayor o igual a 6 y menor a 7 equivale a 'S'
* Calificación entre 7 y 8 equivale a 'B'
* Calificación entre 9 y 10 equivale a 'E'
*/

#include <stdio.h>
#include <string.h>

int main()
{
   ConvierteCalificacion();
}

void ConvierteCalificacion(){
	while(1){ //Bucle para que el programa no termine 
		int calificacionNumero; // definimos la variable calificacionNumero como entero 
		char calificacionLetras[2]; //definimos la variable calificacionLetras como un arreglo de caracteres de tamaño 2

  		printf("Captura la calificación del alumno: "); // Solicitamos que el usuario capture la calificación
  		
  		/*
  		Usamos un bucle while para validar el valor de calificacionNumero utilizando la función scanf. 
  		El bucle se repetirá hasta que el valor capturado por el usuario sea un número entero válido. 
		Si scanf no puede leer un número entero válido (es decir, si el valor devuelto por scanf no es igual a 1), el bucle se repetirá.
  		*/
  		while (scanf("%d", &calificacionNumero) != 1) //"%d" es un especificador de formato que indica que se debe imprimir en pantalla un número entero 
  		{
  			printf("Captura un número válido para continuar: ");
  			while (getchar() != '\n'); // getchar() lee la entrada y se seguirá ejecutando hasta que se encuentre un salto de línea '\n'
  		}
  		
  		/*
  		En caso de que la calificación sea menor a 1 y mayor que 10 terminamos el programa mostrando un mensaje
  		(esto no se pidió en las condiciones pero podemos limitar el rango de números capturados simulando la reducción errores de captura)
  		*/
  		if (calificacionNumero < 1 || calificacionNumero > 10)
  		{
  			printf("La calificación debe ser entro 1 y 10\n");
  			ConvierteCalificacion(); //ejecutamos nuevamente el programa desde el inicio
  		}
  		//convertimos las calificaciones numericas a texto
  		if (calificacionNumero >= 1 && calificacionNumero < 6)
  		{
  			strcpy(calificacionLetras, "NA"); // strcpy copia la cadena "NA" en el arreglo calificacionLetras. strcpy se encuentra en la biblioteca string
  		}
  		else if (calificacionNumero >= 6 && calificacionNumero < 7)
  		{
  			strcpy(calificacionLetras, "S");
  		}
  		
		// Para convertir los números 7, 8, 9 y 10 podemos hacerlo de las siguientes maneras, usando los operadores lógicos AND y OR
		else if (calificacionNumero >= 7 && calificacionNumero <= 8)
		{
			strcpy(calificacionLetras, "B");
		}
		else if (calificacionNumero == 9 || calificacionNumero == 10)
		{
			strcpy(calificacionLetras, "E");
		} 
		
		//mostramos la calificación en pantalla
		printf("La calificación del alumno es %s\n", calificacionLetras);  //"%s" es un especificador de formato que indica que se debe imprimir en pantalla una cadena de caracteres
		
	}
	return 0;

}

