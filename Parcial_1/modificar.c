#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void modificar(Producto miProducto[], int auxCodigo[])
{
	
	char titulo[150];
	char autor[150];
	
	int i;
	int a = 0;

	int codigo;
	
	printf("\nIngrese el codigo del Libro a modificar: ");
	scanf("%d", &codigo);
	
	if(validar_existeCodigo(auxCodigo, codigo) != 0)//corregido (debo buscar la pocision en la que se encuentra el codigo)
	{
		for(i = 0; i < TAMANIO; i++)//busco el codigo
		{
			if(miProducto[i].codigo == codigo)
				break;
		}
		
		pedirCadena("Titulo",	titulo);
		
		pedirCadena("Autor",	autor);
		
		do
		{
			a = 0;
			
				
			
				if(validar_cadena(titulo, 80) != 0)
				{
					if(validar_cadena(autor, 50) != 0)
					{
						strcpy(miProducto[i].titulo, titulo);//corregido la posicion
						strcpy(miProducto[i].autor, autor);//corregido la posicion
					}
					else
					{
						printf("\nERROR, supera los caracteres establecidos\n");
							
						pedirCadena("Autor",	autor);
								
						a = 1;
					}
							
				}
				else
				{
					printf("\nERROR, supera los caracteres establecidos\n");
						
					pedirCadena("Titulo",	titulo);
						
					a = 1;
				}
			
					
		
		}while(a == 1);

	}
	else
		printf("\nEl codigo del Libro no existe\n");
	
	printf("\n\n");	
}
	
