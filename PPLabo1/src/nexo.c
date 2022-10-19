#include "nexo.h"

int darDeBajaAuto(eAuto listaAutos[],int tamAutos,eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColor)
{
	int retorno=0;
	int idAEliminar;
	int index;
	mostrarAutos(listaAutos, tamAutos, listaMarcas, tamMarcas, listaColores, tamColor);
	Utn_PedirEntero(&idAEliminar, "ingrese id del auto a eliminar: ", "error, reingrese: ", -40000, 40000, 15);
	index=buscarAutoPorId(listaAutos, tamAutos, idAEliminar);
	if(index!=-1)
	{
		listaAutos[index].isEmpty=LIBRE;
		retorno=1;
	}
	return retorno;
}



void mostrarAutos(eAuto listaAutos[],int tamAutos,eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColor)
{
	int indexMarca;
	int indexColor;
	for(int i=0;i<tamAutos;i++)
	{
		indexColor=buscarColorPorId(listaColores, tamColor, listaAutos[i].idColor);
		indexMarca=buscarMarcaPorId(listaMarcas, tamMarcas, listaAutos[i].idMarca);
		if(indexColor!=-1 && indexMarca!=-1 && listaAutos[i].isEmpty==OCUPADO)
		{
			mostrarUnAuto(listaAutos[i], listaMarcas[indexMarca], listaColores[indexColor]);
		}
	}
}
void mostrarUnAuto(eAuto unAuto,eMarca unaMarca,eColor unColor)
{
	printf("%d %s %s %c\n",unAuto.id,unaMarca.descripcion,unColor.nombreColor,unAuto.caja);
}


int darDeAltaAuto(int* id,eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColores,eAuto listaAutos[],int tamAutos)
{
	int retorno=0;
	int index;
	if(id!=NULL && listaMarcas!=NULL && tamMarcas>=0 && listaColores!=NULL && tamColores>=0)
	{
		index=buscarLibreAuto(listaAutos, tamAutos);
		if(index!=-1)
		{
			listaAutos[index]=PedirUnAuto(listaMarcas, tamMarcas, listaColores, tamColores);
			listaAutos[index].id=*id+1;
			retorno=1;
		}
	}
	return retorno;
}


eAuto PedirUnAuto(eMarca listaMarcas[],int tamMarcas,eColor listaColores[],int tamColores)
{
	eAuto autoAux;

	mostrarMarcas(listaMarcas, tamMarcas);
	Utn_PedirEntero(&autoAux.idMarca, "ingrese marca: ", "error, reingrese: ", -99999, 99999, 15);
	while(buscarMarcaPorId(listaMarcas, tamMarcas, autoAux.idMarca)==-1)
	{
		Utn_PedirEntero(&autoAux.idMarca, "ingrese una marca existente: ", "error, reingrese: ", -99999, 99999, 15);
	}
	mostrarColores(listaColores, tamColores);
	Utn_PedirEntero(&autoAux.idColor, "ingrese color: ", "error, reingrese: ", -99999, 99999, 15);
	while(buscarColorPorId(listaColores, tamColores, autoAux.idColor)==-1)
	{
		Utn_PedirEntero(&autoAux.idColor, "ingrese un color existente: ", "error, reingrese: ", -99999, 99999, 15);
	}
	autoAux.caja=Utn_PedirCaracter("ingrese si el auto es caja manual(m) o automatica(a)", "error, reingrese: ", 'a', 'm');
	autoAux.isEmpty=OCUPADO;
	return autoAux;
}
