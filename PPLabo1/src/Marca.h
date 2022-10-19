#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"

typedef struct
{
	int id;
	char descripcion[21];
}eMarca;
int mostrarMarcas(eMarca listaMarcas[],int tam);
void mostrarUnaMarca(eMarca unaMarca);
int buscarMarcaPorId(eMarca listaMarcas[],int tam,int id);
