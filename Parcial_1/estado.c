#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void tipoEstado(Producto miProducto[], int numero)
{
	if(miProducto[numero].alquilado == 1)//corregido
		printf("Alquilado");
		
	if(miProducto[numero].alquilado == 0)//corregido
		printf("Disponible");
		
}
