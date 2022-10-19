#include "Color.h"
int buscarColorPorId(eColor listaColor[],int tam,int id)
{
	int retorno=-1;
	if(listaColor!=NULL && tam>=0)
	{
		retorno=1;
		for(int i=0;i<tam;i++)
		{
			if(listaColor[i].id==id)
			{
				retorno=i;
				break;
			}
		}
	}
	return retorno;
}
int mostrarColores(eColor listaColores[],int tam)
{
	int retorno=0;
	if(listaColores!=NULL && tam>=0)
	{
		retorno=1;
		for(int i=0;i<tam;i++)
		{
			mostrarUnColor(listaColores[i]);
		}
	}
	return retorno;
}
void mostrarUnColor(eColor unColor)
{
	printf("%d %s\n",unColor.id,unColor.nombreColor);
}
