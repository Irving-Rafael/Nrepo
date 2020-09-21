#include <stdio.h>
#include <math.h>
#include "Programa1.h"

//Programa para agregar cosas de papeleria a tu carrito
int carrito;
int precio;
int i;
int ciclo;
int main(){
	int opc;
	printf("Hola");
	printf("Bienvenido al menu de opciones");
	printf("\nTenemos en existencia los siguientes elementos: ");
	printf("\n1.- Pluma Bic  2.-Regla de aluminio");
	printf("\n3.- Lapiz paper mate  4.-Colores prisma color");
	printf("\n5.- Pegamento   6.-Cinta adeshiva\n ");
	printf("\nLos precios son por articulo:\nArticulo 1.- $3		Articulo 2.-$25");
	printf("\nArticulo 3.- $5		Articulo 4.- $60\nArticulo 5.- $22	Articulo 6.- $8");
	
	printf("\nAgregaremos 10 productos al carrito: ");
	printf("\nDesea comenzar: 1= Si - 2= No\n");
	scanf("%d", &ciclo);
	while (ciclo < 11){
		printf("\nQue articulo desea introducir a su carrito?: ");
		scanf("%d", &i);
		if (i == 1){
			printf("Se ha agregado Pluma Bic");
			precio = precio + 3;
		}
		if (i == 2){
			printf("Se ha agregado Regla de aluminio");
			precio = precio + 25;
		}
		if (i == 3){
			printf("Se ha agregado Lapiz paper mate");
			precio = precio + 5;
		}
		if (i == 4){
			printf("Se ha agregado Colores prima color");
			precio = precio + 60;
		}
		if (i == 5){
			printf("Se ha agregado Pegamento");
			precio = precio + 22;
		}
		if (i == 6){
			printf("Se ha agregado Cinta adhesiva");
			precio = precio + 8;
		}
		ciclo = ciclo +1;
	}
		printf("\nMuy bien ahora solo pague su recibo");
		printf("\nSu total es de: %d\n", precio);
		
	int opcion;
    int n1, resultado;
    printf("Bienvenido al menu de opciones\n");
    printf("\nPor favor inserte 1: ");
    scanf("%i",&opcion);
    switch (opcion)
    {
        case 1: programa1();

        break;
        default : printf("!!! La opcion seleccionada no es valida !!!");
        break;
        return(0);
    }
	
}
