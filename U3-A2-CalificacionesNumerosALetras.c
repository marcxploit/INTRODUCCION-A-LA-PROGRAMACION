/*
Alumno: Marco Antonio Garc�a Bautista
N�mero de cuenta: 305027731
Licenciatura: Inform�tica
Materia: Introducci�n a la programaci�n
Descripci�n del programa: 
Programa en C que transforma una calificaci�n num�rica a su equivalente en letra, siguiendo las siguientes reglas:
* Calificaci�n menor a 6 equivale a 'NA'
* Calificaci�n mayor o igual a 6 y menor a 7 equivale a 'S'
* Calificaci�n entre 7 y 8 equivale a 'B'
* Calificaci�n entre 9 y 10 equivale a 'E'
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
		char calificacionLetras[2]; //definimos la variable calificacionLetras como un arreglo de caracteres de tama�o 2

  		printf("Captura la calificaci�n del alumno: "); // Solicitamos que el usuario capture la calificaci�n
  		
  		/*
  		Usamos un bucle while para validar el valor de calificacionNumero utilizando la funci�n scanf. 
  		El bucle se repetir� hasta que el valor capturado por el usuario sea un n�mero entero v�lido. 
		Si scanf no puede leer un n�mero entero v�lido (es decir, si el valor devuelto por scanf no es igual a 1), el bucle se repetir�.
  		*/
  		while (scanf("%d", &calificacionNumero) != 1) //"%d" es un especificador de formato que indica que se debe imprimir en pantalla un n�mero entero 
  		{
  			printf("Captura un n�mero v�lido para continuar: ");
  			while (getchar() != '\n'); // getchar() lee la entrada y se seguir� ejecutando hasta que se encuentre un salto de l�nea '\n'
  		}
  		
  		/*
  		En caso de que la calificaci�n sea menor a 1 y mayor que 10 terminamos el programa mostrando un mensaje
  		(esto no se pidi� en las condiciones pero podemos limitar el rango de n�meros capturados simulando la reducci�n errores de captura)
  		*/
  		if (calificacionNumero < 1 || calificacionNumero > 10)
  		{
  			printf("La calificaci�n debe ser entro 1 y 10\n");
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
  		
		// Para convertir los n�meros 7, 8, 9 y 10 podemos hacerlo de las siguientes maneras, usando los operadores l�gicos AND y OR
		else if (calificacionNumero >= 7 && calificacionNumero <= 8)
		{
			strcpy(calificacionLetras, "B");
		}
		else if (calificacionNumero == 9 || calificacionNumero == 10)
		{
			strcpy(calificacionLetras, "E");
		} 
		
		//mostramos la calificaci�n en pantalla
		printf("La calificaci�n del alumno es %s\n", calificacionLetras);  //"%s" es un especificador de formato que indica que se debe imprimir en pantalla una cadena de caracteres
		
	}
	return 0;

}

