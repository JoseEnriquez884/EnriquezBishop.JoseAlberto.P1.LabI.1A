/*
 ============================================================================
 Name        : PPLabo1.c
 Author      : Enriquez Bishop Jose Alberto
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Inputs.h"
#include "nexo.h"

#define TAM_MARCAS 5
#define TAM_COLORES 5
#define TAM_LAVADOS 4
#define TAM_AUTOS 10

int main(void)
{
	setbuf(stdout,NULL);
	char opcion;
	int idAutos=2000;
	eAuto listaDeAutos[TAM_AUTOS];
	eMarca listaDeMarcas[TAM_MARCAS]={{1000,"Renault"}, {1001,"Ford"}, {1002,"Fiat"}, {1003,"Chevrolet"}, {1004,"Peugeot"}};
	eColor listaDeColores[TAM_COLORES]={{5000,"Negro"}, {5001,"Blanco"}, {5002,"Rojo"}, {5003,"Verde"}, {5004,"Azul"}};
	eServicio listaDeLavados[TAM_LAVADOS]={{20000,"Lavado",450},{20001,"Pulido",500},{20002,"Encerado",600},{20003,"Completo",900}};
	inicializarArrayAutos(listaDeAutos, TAM_AUTOS);
	do
	{
		printf("A. ALTA DE AUTO\n");
		printf("B. MODIFICAR AUTO\n");
		printf("C. BAJA DE AUTO\n");
		printf("D. LISTAR AUTOS\n");
		printf("E. LISTAR MARCAS\n");
		printf("F. LISTAR COLORES\n");
		printf("G. LISTAR SERVICIOS\n");
		printf("H. ALTA TRABAJO\n");
		printf("I. LISTAR TRABAJOS\n");
		printf("J. SALIR\n");
		opcion=Utn_PedirCaracter("ingrese opcion :", "error, reingrese: ", 'a', 'z');
		switch(opcion)
		{
			case 'a':
				if(darDeAltaAuto(&idAutos, listaDeMarcas, TAM_MARCAS, listaDeColores, TAM_COLORES, listaDeAutos, TAM_AUTOS))
				{
					printf("se dio de alta con exito\n");
				}else
				{
					printf("no hay lugar para dar de alta\n");
				}
				break;
			case 'b':
				if(darDeBajaAuto(listaDeAutos, TAM_AUTOS, listaDeMarcas, TAM_MARCAS, listaDeColores, TAM_COLORES))
				{
					printf("se dio de baja con exito\n");
				}else
				{
					printf("no se encontro el auto\n");
				}
				break;
			case 'c':
				break;
			case 'd':
				break;
			case 'e':
				break;
			case 'f':
				break;
			case 'g':
				break;
			case 'h':
				break;
			case 'i':
				break;
		}
	}while(opcion!='j');


	return EXIT_SUCCESS;
}
