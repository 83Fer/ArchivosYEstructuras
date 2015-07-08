#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include"lib.h"
//validacion de tamaño
int validar_codigo(int posicion)
{
	if(posicion < 1 || posicion > TAMANIO)
		return 0;
}

//validacion de posiciones y el ingreso de codigo o legajos
int validar_repeticion(int auxCodigo[], int posicion)
{
	int i;
	
	for(i = 0; i < TAMANIO ; i++)
	{
		if(auxCodigo[i] == posicion)
			break;
	}
	
	if(i == TAMANIO)
	{
		for(i = 0; i < TAMANIO; i++)
		{
			if(auxCodigo[i] == -1)
			{
				auxCodigo[i] = posicion;
				return  1;
			}
		}
	}
	
	else 
		return 0;
}

//validacion cantidad
int validar_cantidad( int dni)
{
	if(dni < 1000000 || dni > 50000000)
		return 0;
}

//vaidacion de cadena
int validar_cadena(char titulo[], int numero)
{
	
	if(strlen(titulo) > numero)
		return 0;
			
}



//validacion si existe codigo
int validar_existeCodigo(int auxCodigo[], int posicion)
{
	int i;
	
	for(i = 0; i < TAMANIO ; i++)
	{
		if(auxCodigo[i] == posicion)
			break;
	}
	
	if(i == TAMANIO)
		return 0;
	
	else 
		return 1;
}
