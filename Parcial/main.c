#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "library.h"
#define MAX_QTY 200
#define VENTAS 1000
int main()
{
cliente clienteArray[MAX_QTY];

    char idAuxStr[MAX_QTY];
    int idAux;
    int cuitAux[12];
    int qtyAux;
    float priceAux;

    char cuitAuxStr[50];
    char qtyAuxStr[50];
    char priceAuxStr[50];

    int i,j;

char nombreAux[51];
char apellidoAux[51];
int cuit;
int id;
int freePlaceIndex;
int foundIndex;
int option = 0;

setStatus(clienteArray,MAX_QTY,0);

while(option!=0){

option=getInt("\n\n\n1- Alta \n2- Baja \n3- Modificar \n4- Vender \n5- Editar \n6- Cobrar \n7- Imprimir\n8- Salir \n\n\n");

switch(option!=0)
    {
        case 1:

        freePlaceIndex=findEmptyPlace(clienteArray,MAX_QTY);
        if(freePlaceIndex=-1)
        {
            printf("\n No quedan lugares libres \n ");
            break;
        }

        printf("\nALTA\n");

                if (!getStringNumeros("Ingrese el cuit: ",cuitAuxStr))
                {
                    printf ("El cuit debe ser numerico\n");
                    break;
                }
                cuitAux = atoi(cuitAuxStr);

                if(findclienteByCuit(clienteArray,MAX_QTY,cuitAux) != -1)
                {
                    printf("\n\nEL CUIT YA EXISTE\n");
                    break;
                }


                if (!getStringLetras("Ingrese el nombre: ",nombreAux))
                {
                    printf ("El nombre debe estar compuesta solo por letras\n");
                    break;
                }

                if (!getStringLetras("Ingrese el apellido: ",apellidoAux))
                {
                    printf ("El apellido debe estar compuesta solo por letras\n");
                    break;
                }

                if (!getStringNumeros("Ingrese el ID: ",idAuxStr))
                {
                    printf ("El ID debe ser numerico\n");
                    break;
                }
                idAux = atoi(idAuxStr);

                if(findclienteById(clienteArray,MAX_QTY,idAux) != -1)
                {
                    printf("\n\nEL ID YA EXISTE\n");
                    break;
                }



                clienteArray[freePlaceIndex].cuit = cuitAux;
                strcpy(clienteArray[freePlaceIndex].nombre,nombreAux);
                strcpy(clienteArray[freePlaceIndex].apellido,apellidoAux);
                clienteArray[freePlaceIndex].id = idAux;

                break;

                case 2:
                if (!getStringNumeros("Ingrese el ID del cliente a dar de baja: ",idAuxStr))
                {
                    printf ("El ID del cliente debe ser numerico\n");
                    break;
                }
                idAux = atoi(idAuxStr);
                foundIndex = findProductByid(clienteArray,MAX_QTY,idAux);
                if(foundIndex == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE ID\n");
                    break;
                }
                clienteArray[foundIndex].status = 0;

                break;

                case 3:
                if (!getStringNumeros("Ingrese el ID del cliente a modificar: ",idAuxStr))
                {
                    printf ("El ID del cliente debe ser numerico\n");
                    break;
                }
                idAux = atoi(idAuxStr);
                foundIndex = findclienteById(clienteArray,MAX_QTY,idAux);
                if(foundIndex == -1)
                {
                    printf("\n\nNO SE ENCUENTRA ESE ID\n");
                    break;
                }



               if (!getStringLetras("Ingrese el nombre: ",nombreAux))
                {
                    printf ("El nombre debe estar compuesta solo por letras\n");
                    break;
                }

                if (!getStringLetras("Ingrese el apellido: ",apellidoAux))
                {
                    printf ("El apellido debe estar compuesta solo por letras\n");
                    break;
                }

                if (!getStringNumeros("Ingrese el cuit: ",cuitAuxStr))
                {
                    printf ("La cuit debe ser numerica\n");
                    break;
                }
                cuitAux = atoi(cuitAuxStr);


                strcpy(clienteArray[foundIndex].nombre,nombreAux);
                strcpy(clienteArray[foundIndex].apellido,apellidoAux);
                clienteArray[foundIndex].cuit = cuitAux;
                break;

                case 4:
                printf("\nLISTAR\n");
                for(i=0;i < MAX_QTY; i++)
                {
                    if(clienteArray[i].status != 0)
                    {
                        printf("\n%d - %s - %s - %d",clienteArray[i].id,clienteArray[i].nombre,clienteArray[i].apellido,clienteArray[i].cuit);
                    }
                }
                break;

            case 5:
                printf("\nORDENADO\n");

                for(i=0; i < MAX_QTY - 1; i++)
                {
                    if(clienteArray[i].status == 0)
                    {
                        continue;
                    }
                    for(j=i+1; j < MAX_QTY; j++)
                    {
                        if(clienteArray[i].status == 0)
                        {
                            continue;
                        }
                        if(strcmp(clienteArray[j].nombre,clienteArray[i].apellido))
                        {
                            nombreAux = clienteArray[j];
                            clienteArray[j] = clienteArray[i];
                            clienteArray[i] = nombreAux;
                        }
                    }
                }
                break;


         }
    }


    return 0;
}




