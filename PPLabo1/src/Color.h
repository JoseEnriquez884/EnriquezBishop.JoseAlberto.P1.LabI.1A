#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"

typedef struct
{
	int id;
	char nombreColor[21];
}eColor;

int buscarColorPorId(eColor listaColor[],int tam,int id);
int mostrarColores(eColor listaColores[],int tam);
void mostrarUnColor(eColor unColor);
