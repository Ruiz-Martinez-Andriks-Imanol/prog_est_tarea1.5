/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 03/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:

    -Variables enteras y flotantes
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Condicionar a flotante
    -Comentarios para la documentación interna del programa
*/	
#include <stdio.h>
int main() {
	//Declaración de variable
	int B, b, h;
	float area;
	//Entradas de Datos
	printf("Calcular el área del Trapecio \n");
	printf("Introduzca B:");
	scanf("%d", &B);
	printf("Introduzca b:");
	scanf("%d", &b);
	printf("Introduzca h:");
	scanf("%d", &h);
	//Proceso
	area=(float)(B+b)*h/2;
	//Salida
	printf("El area del trapecio es %f", area);
	return 0;
}	
