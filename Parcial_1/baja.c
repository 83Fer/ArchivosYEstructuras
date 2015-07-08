#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void baja(Producto miProducto[], int auxCodigo[])
{
	
	int a = 0;
	int i;

	int codigo;
	
	printf("\nIngrese el codigo del producto a dar de baja: ");
	scanf("%d", &codigo);
	
	if(validar_existeCodigo(auxCodigo, codigo) != 0)
	{
		for(i = 0; i < TAMANIO; i++)//corregido (busco la posicion para borrar el codigo)
		{
			if(miProducto[i].codigo == codigo)
			{
				miProducto[i].codigo = -1;
				break;
			}
		}
		
		
		
		for(i = 0; i < TAMANIO; i++)//corregido (tambien en el auxiliar)
		{
			if(auxCodigo[i] == codigo)
			{
				auxCodigo[i] = -1;
				break;
			}
				
		}
		
		
		printf("\nProducto borrado\n");
	}
	
	else 
		printf("\nEl numero de codigo no existe\n");
		
	printf("\n\n");
}

