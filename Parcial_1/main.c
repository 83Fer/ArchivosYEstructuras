
#include <stdio.h>
#include <stdlib.h>

#include"lib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	//Productos
	Producto miProducto[TAMANIO];
	int auxCodigo[TAMANIO];
	int opcion;
	int a = 0;//bandera
	
	inicializarArray(auxCodigo, -1);
	
	inicializarCodigo(miProducto, -1);
	
	inicializarAlquilado(miProducto, 0);
	
	inicializarPrestados(miProducto, 0);
	
	inicializarDNI(miProducto, 0);
	
	
	
	//Archivos
	
	FILE* dato;
	
	if((dato = fopen("Archivos.dat", "rb+")) == NULL)	
		if((dato = fopen("Archivos.dat", "wb+")) == NULL)
		{
			printf("No se puede abrir el archivo");
			exit(1);
		}
		
	cargarDatos(dato, miProducto);
	
	//fclose(dato);	
	
	while(opcion != 8)
	{
		printf("\tMENU\n");
		printf("1-Altas\n");
		printf("2-Modificar\n");
		printf("3-Baja\n");
		printf("4-Prestamos\n");
		printf("5-Devolucion\n");
		printf("6-Informar\n");
		printf("7-Listar\n");
		printf("8-Salir");
		
		
		
		do
		{	
			printf("\nIngrese opcion: ");
			scanf("%d", &opcion);
			fflush(stdin);
		
		
			if(a == 0)
			{
				if(opcion != 1 && opcion != 8)
					printf("\nDebe ingresar algun producto antes para realizar esta accion\n\n");
				else	
					a = 1;
			}
			
		}while(a == 0);
		
		
		system("cls");
		
		
		switch(opcion)
		{
			case 1:
				altas(miProducto, auxCodigo);
				break;
					
			case 2:
				modificar(miProducto, auxCodigo);
				break;
				
			case 3:
				baja(miProducto, auxCodigo);
				break;
				
			case 4:
				alquilar(miProducto, auxCodigo);
				break;
				
			case 5:
				devolucion(miProducto, auxCodigo);
				break;
					
			case 6:
				informar(miProducto);
				break;
				
			case 7:
				listar(miProducto);
				break;
				
			case 8:
				guardarDatos(dato, miProducto);
				break;
				
			default:
				printf("\nERROR, ingrese una opcion del menu\n");
				break;
		}
		
		
	}
	
	//finaliza archivo
	fclose(dato);
	//
	
	
	system("cls");
	printf("\n\tFinalizo el programa\n\n");
	
	system("PAUSE");
	return 0;
}

  
 
