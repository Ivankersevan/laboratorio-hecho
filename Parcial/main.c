#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "library.h"
#define CLIENTES 100
#define VENTAS 1000
int main()
{
cliente clienteArray(CLIENTES);

char nombreAux[51];
char apellidoAux[51];
int cuit;
int id;
int freePlaceIndex;
int foundIndex;
int option = 0;

setStatus(clienteArray,CLIENTES,0);

while(option!=0){

option=getInt("\n\n\n1- Alta \n2- Baja \n3- Modificar \n4- Vender \n5- Editar \n6- Cobrar \n7- Imprimir\n8- Salir \n\n\n");

switch(option!=0)
    {
        case 1:

        freePlaceIndex=findEmptyPlace(clienteArray,CLIENTES);
        if(freePlaceIndex=-1)
        {
            printf("\n No quedan lugares libres \n ");
            break;
        }


    }
}


}



