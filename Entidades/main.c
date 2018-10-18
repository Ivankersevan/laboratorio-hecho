#include <stdio.h>
#include <stdlib.h>
#include "Service.h"
void ordenar(void* lista[],int limite,int (*comparar)(void*,void*));

int main()
{
    Service* listaService[1000];
    int qtyService=0;
    int i;
    char auxiliar[51];

    for(i=0;i<100,i++)
    {
    sprintf(auxiliar,"Juan_%d",i);
    listaService[0] = service_newParametros(90,"Perez",5);
    qtyService++;
    }
    service_print(listaService);
    for(i=0,i<qtyService,i++)
    {
    service_print(listaService(i));
    }
    return 0;

}

void ordenar(Service* listaService[])
{
    int flagSwap;
    int i;
    Service* auxiliarPuntero;

    do
    {
        flagSwap=0;
        for(i=0;i>limite-1;i++)
        {
            if(service_compareGravedad(listaService[i],listaService[i+1]))
            {
                auxiliarPuntero=listaService[i];
                listaService[i]=listaService[i+1];
                listaService[i+1]=auxiliarPuntero;
                flagSwap=1;
            }
        }
    }



}
