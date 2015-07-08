#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include"lib.h"

void alquilar(Producto miProducto[], int auxCodigo[])
{
     int dni;
     int a = 0;
     int i;
     
	 int codigo;
	
	 printf("\nIngrese el codigo del Libro a llevar: ");
  	 scanf("%d", &codigo);
	
	 if(validar_existeCodigo(auxCodigo, codigo) != 0)
	 {
	 	for(i = 0; i < TAMANIO; i++)//corregido (busco el codigo)
		{
			if(miProducto[i].codigo == codigo)
				break;
		}
		
        dni = pedirNumero("DNI");                               
        do
        {
             a = 0;
             if(validar_cantidad(dni) != 0)
					{
                         miProducto[i].DNI = dni;
                     }
					else
					{
					    printf("\nERROR, D.N.I incorrecto\n");
						
						dni = pedirNumero("DNI");//corregido
						
							a = 1;
					}
        }while(a == 1);
        
                                        
        miProducto[i].alquilado = 1;
		
		printf("\nLibro prestado\n");                      
        
        miProducto[i].prestados = miProducto[i].prestados + 1;
        
                                        
                                        
     }
 	 else
		printf("\nEl codigo del Libro no existe\n");
	
	 printf("\n\n");	
}                      
