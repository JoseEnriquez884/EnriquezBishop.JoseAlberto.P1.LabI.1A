#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"
//#include "Fecha.h"
#include "Color.h"
#include "Servicio.h"
#include "Trabajo.h"
#include "Auto.h"
#include "Marca.h"

int darDeBajaAuto(eAuto listaAutos[],int tamAutos,eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColor);
void mostrarAutos(eAuto listaAutos[],int tamAutos,eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColor);
void mostrarUnAuto(eAuto unAuto,eMarca unaMarca,eColor unColor);
int darDeAltaAuto(int* id,eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColores,eAuto listaAutos[],int tamAutos);
eAuto PedirUnAuto(eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColores);
