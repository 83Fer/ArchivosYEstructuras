#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

//Cargar Archvos
void cargarDatos(FILE* dato, Producto miProducto[])
{
	int i = 0;
	int cant;
	
	Producto auxProducto;
	
	rewind(dato);
	while(!feof(dato))
	{
		cant = fread(&auxProducto, sizeof(auxProducto), 1, dato);
		if(cant != 1)
		{
			if(feof(dato))
				break;
				
			else
			{
				printf("No se leyo el ultimo registro");
				break;
			}
		}
		
		miProducto[i].codigo = auxProducto.codigo;
		strcpy(miProducto[i].titulo, auxProducto.titulo);
		strcpy(miProducto[i].autor, auxProducto.autor);
		miProducto[i].alquilado = auxProducto.alquilado;
		miProducto[i].prestados = auxProducto.prestados;
		
		i++;
		
		fseek(dato, 0L, SEEK_END);
		fwrite(miProducto+i, sizeof(miProducto), 1, dato);

	}
}



//Guardar archivos
void guardarDatos(FILE* dato, Producto miProducto[])
{
	int i ;

	
	
	rewind(dato);
	
	for(i = 0; i < 3; i++)
	{
		miProducto[i];
		
		
		fwrite(miProducto+i, sizeof(miProducto), 1, dato);
	}
	
}
