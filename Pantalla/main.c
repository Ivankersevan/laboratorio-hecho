#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
int main()
{

book bookArray(MAX_QTY);

char tittleAux[51];

int authorIdAux;
int codeAux;
int stockAux;

int freePlaceIndex;
int foundIndex;
int option=0;

setStatus(bookArray,MAX_QTY,0);

setBook(bookArray,1,1,"Aprendiendo C",22,10);
setBook(bookArray,2,2,"Segunda edicion",2,4);
setBook(bookArray,10,10,"El de arriba es mejor",3,2);
setBook(bookArray,4,4,"Printf para todo",6,8);

while(option!=0)
{
    option=getInt("\n\n\n1- Alta \n2- Baja \n3- Modificar \n4- Listar \n5- Ordenar \n6- Salir \n\n\n");

    switch(option!=0)
    {
        case 1:

        freePlaceIndex=findEmptyPlace(bookArray,MAX_QTY);
        if(freePlaceIndex=-1)
        {
            printf("\n No quedan lugares libres \n ");
            break;
        }
        codeAux=getValidInt("Ingrese el codigo del libro","El codigo del libro debe ser numerico",1,1500);

    }
}



}
