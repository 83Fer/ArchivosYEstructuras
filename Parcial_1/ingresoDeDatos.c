#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"lib.h"

int pedirNumero(char mensaje[])
{
	int numero;
	
		
	printf("Ingrese %s\n", mensaje);
	scanf("%d", &numero);
	fflush(stdin);
	
	system("cls");
		
	
	return numero;
	
}




void pedirCadena(char mensaje[],char descripcion[])
{

				
	printf("Ingrese %s\n",mensaje);
	fflush(stdin);
	scanf("%s", descripcion);
	
	system("cls");
	
	
	
}

