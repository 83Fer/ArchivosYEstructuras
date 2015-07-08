#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void informar(Producto miProducto[])
{
	int i;
	int j;

	int contProductos = 0;
	
	Producto auxProducto;
	
	int total = 0;
	
	for(i = 0; i < TAMANIO - 1; i++)
	{
		for(j = i+1; j < TAMANIO; j++)
		{
			
			if(miProducto[i].prestados < miProducto[j].prestados)
			{
				auxProducto = miProducto[i];
				miProducto[i] = miProducto[j];
				miProducto[j] = auxProducto;
			}
			else if(miProducto[i].prestados == miProducto[j].prestados)
			{
				//Devuelve mayor que cero si cadena1 es mayor que cadena2
				if(strcmp(miProducto[i].titulo, miProducto[j].titulo) > 0)
				{
					auxProducto = miProducto[i];
					miProducto[i] = miProducto[j];
					miProducto[j] = auxProducto;
				}
			}
			
		}
	}
	
	printf("\nLista de Libros mas prestados:\n");
	
	for(i = 0; i < TAMANIO; i++)
	{
		if(miProducto[i].prestados != 0)
		{
			if(miProducto[i].codigo != -1)//corregido
			{
				printf("\nCodigo: %d",miProducto[i].codigo );
				printf("\nTitulo: %s", miProducto[i].titulo);
				printf("\nAutor: %s", miProducto[i].autor);
				printf("\nEstado: ");
				tipoEstado( miProducto, i);
				if(miProducto[i].alquilado == 1)
                   printf("\nDNI: %d\n", miProducto[i].DNI);
				
				total = total + miProducto[i].prestados;

			}
		
			
		}
	}
	
	printf("\nEl total de los libros prestados son: %d\n\n", total);
	
	
	system("PAUSE");
	system("cls");
}
