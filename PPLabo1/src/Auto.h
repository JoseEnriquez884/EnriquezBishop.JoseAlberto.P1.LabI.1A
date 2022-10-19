#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"


#define OCUPADO 1
#define LIBRE 0

typedef struct
{
	int id;
	int idMarca;
	int idColor;
	char caja;
	int isEmpty;
}eAuto;

int buscarAutoPorId(eAuto listaAutos[],int tam,int id);
int altaDeAuto(eAuto listaAutos[],int tam);
int buscarLibreAuto(eAuto listaAutos[],int tam);
int inicializarArrayAutos(eAuto listaAutos[],int tam);
