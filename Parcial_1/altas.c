#include <stdio.h>	
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void altas(Producto miProducto[], int auxCodigo[])
{
	int posicion;
	char titulo[100];
	char autor[100];
	
	int i;
	int a = 0;

	
	
	
		posicion = pedirNumero("codigo");
		
		pedirCadena("Titulo",	titulo);
		
		pedirCadena("Autor",	autor);
		
		for(i = 0; i < TAMANIO; i++)//corregido (busco la posicion )
		{
			if(miProducto[i].codigo == -1)
				break;
		}
		
		do
		{
			a = 0;
			
			if(validar_codigo(posicion) != 0)
			{
				if(validar_cadena(titulo, 80) != 0)
				{
					if(validar_cadena(autor, 50) != 0)
					{
						if(validar_repeticion(auxCodigo, posicion) != 0)//corrregido (para que se guarde la posicion a lo ultimo)
						{
								miProducto[i].codigo = posicion;
								strcpy(miProducto[i].titulo, titulo);
								strcpy(miProducto[i].autor, autor);
							
							
						}
						else
						{
							printf("\nError, codigo ya ingresado\n");
							printf("\nVuelva a seleccionar una opcion del menu\n");
					
							a = 0;
						}	
				
					}
					else
					{
						printf("\nERROR,supera los caracteres establecidos\n");
						
						pedirCadena("autor",	autor);
						
						a = 1;
					}
				}
				else
				{
					printf("\nERROR,supera los caracteres establecidos\n");
						
					pedirCadena("titulo",	titulo);
						
					a = 1;
				}
			}
			else
			{
				printf("\nERROR, codigo inexistente\n");
				
				posicion = pedirNumero("codigo");
						
				a = 1;
			}
				
		
		}while(a == 1);
		
				
		printf("\n");
			
}
