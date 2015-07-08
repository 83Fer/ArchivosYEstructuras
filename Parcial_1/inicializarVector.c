#include<stdio.h>
#include<stdlib.h>

#include"lib.h"

void inicializarArray(int auxCodigo[], int numero)
{
	int i;
	
	for(i = 0; i< TAMANIO; i++)
	{
		auxCodigo[i] = numero;
	}
}

void inicializarCodigo(Producto miProducto[], int numero)
{
	int i;
	
	for(i = 0; i< TAMANIO; i++)
	{
		miProducto[i].codigo = numero;
	}
}

void inicializarAlquilado(Producto miProducto[], int numero)
{
	int i;
	
	for(i = 0; i< TAMANIO; i++)
	{
		miProducto[i].alquilado = numero;
	}
}

void inicializarPrestados(Producto miProducto[], int numero)
{
	int i;
	
	for(i = 0; i< TAMANIO; i++)
	{
		miProducto[i].prestados = numero;
	}
}

void inicializarDNI(Producto miProducto[], int numero)
{
	int i;
	
	for(i = 0; i< TAMANIO; i++)
	{
		miProducto[i].DNI = numero;
	}
}
