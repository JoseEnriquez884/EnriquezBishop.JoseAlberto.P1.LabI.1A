#include "Marca.h"
int buscarMarcaPorId(eMarca listaMarcas[],int tam,int id)
{
	int retorno=-1;
	if(listaMarcas!=NULL && tam>=0)
	{
		retorno=1;
		for(int i=0;i<tam;i++)
		{
			if(listaMarcas[i].id==id)
			{
				retorno=i;
				break;
			}
		}
	}
	return retorno;
}
int mostrarMarcas(eMarca listaMarcas[],int tam)
{
	int retorno=0;
	if(listaMarcas!=NULL && tam>=0)
	{
		retorno=1;
		for(int i=0;i<tam;i++)
		{
			mostrarUnaMarca(listaMarcas[i]);
		}
	}
	return retorno;
}
void mostrarUnaMarca(eMarca unaMarca)
{
	printf("%d %s\n",unaMarca.id,unaMarca.descripcion);
}
