#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void devolucion(Producto miProducto[], int auxCodigo[])
{
     
	 int dni;
     int a = 0;
     int i;
     
	 int codigo;
	
	 printf("\nIngrese el codigo del Libro a devolver: ");
  	 scanf("%d", &codigo);
	
	 if(validar_existeCodigo(auxCodigo, codigo) != 0)
	 {
	 	for(i = 0; i < TAMANIO; i++)//corregido (buscar el codigo)
	 	{
	 		if(miProducto[i].codigo == codigo)
	 			break;
	 	}
	 	
	 	
         if(miProducto[i].alquilado == 1)
         {
                   miProducto[i].DNI = 0; 
                   miProducto[i].alquilado = 0;                     
         }
         else
             printf("\El libro no esta alquilado\n");
                             	                          
     }
 	 else
		printf("\nEl codigo del Libro no existe\n");
	
	 printf("\n\n");	
}                      
