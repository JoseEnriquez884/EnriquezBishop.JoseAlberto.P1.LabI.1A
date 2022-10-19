#include "Auto.h"

int buscarAutoPorId(eAuto listaAutos[],int tam,int id)
{
	int retorno=-1;
	if(listaAutos!=NULL && tam>=0)
	{
		retorno=1;
		for(int i=0;i<tam;i++)
		{
			if(listaAutos[i].id==id)
			{
				retorno=i;
				break;
			}
		}
	}
	return retorno;
}

int buscarLibreAuto(eAuto listaAutos[],int tam)
{
	int retorno;
	retorno=-1;
	if(listaAutos!=NULL && tam>=0)
	{
		for(int i=0;i<tam;i++)
		{
			if(listaAutos[i].isEmpty==LIBRE)
			{
				retorno=i;
				break;
			}
		}
	}
	return retorno;
}
int inicializarArrayAutos(eAuto listaAutos[],int tam)
{
	int retorno;
	retorno=-1;
	if(listaAutos!=NULL && tam>=0)
	{
		for(int i=0;i<tam;i++)
		{
			listaAutos[i].isEmpty=LIBRE;
		}
		retorno=0;
	}
	return retorno;
}
