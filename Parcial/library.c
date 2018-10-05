#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utn.h"
#include "library.h"

void setStatus(cliente clienteArray[],int arrayLenght,int value)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        clienteArray[i].status = value;
    }
}



int findClienteByCode(cliente clienteArray[],int arrayLenght,int id)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(clienteArray[i].id == id && clienteArray[i].status == 1)
        {
            return i;
        }
    }
    return -1;
}


int findEmptyPlace(cliente clienteArray[],int arrayLenght)
{
    int i;
    for(i=0;i < arrayLenght; i++)
    {
        if(clienteArray[i].status == 0)
        {
            return i;
        }
    }
    return -1;
}



void setCliente(cliente clienteArray[],int freePlaceIndex, char nombreAux[],char apellidoAux[],int cuitAux)
{

    strcpy(clienteArray[freePlaceIndex].nombre,nombreAux);
    strcpy(clienteArray[freePlaceIndex].apellido,apellidoAux);
    clienteArray[freePlaceIndex].cuit = cuitAux;
    clienteArray[freePlaceIndex].status = 1;
    clienteArray[freePlaceIndex].id = (clienteArray+1);
}


void showArray(cliente clienteArray[],int arrayLenght)
{
    int i;
    printf("\n|      NOMBRE        |         APELLIDO        |     CUIT    |    ID   |");
    for(i=0;i < arrayLenght; i++)
    {
        if(clienteArray[i].status != 0)
        {
            printf("\n| %-51s  | %-51s | %11d | %5d |",clienteArray[i].nombre,clienteArray[i].apellido,clienteArray[i].cuit,clienteArray[i].id);
        }
    }

}
