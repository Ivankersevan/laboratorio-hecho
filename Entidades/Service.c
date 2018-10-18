#include "Service.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

Service* service_new(void)
{
return (service*) malloc(sizeof(Service*));
}

void service_delete(Service* this)
{
free(this);
}

int service_setGravedad(Service* this, int gravedad)
{
int retorno-1;
if(this!=NULL && isValidGravedad(gravedad))
    {
    strcpy(gravedad.this->gravedad);
    retorno=0;
    }
return retorno;
}

static int isValidGravedad(int* gravedad)
{
return 0;
}

int service_setMensaje(Service* this,char* mensaje)
{
int retorno=-1;
if (this != NULL && isValidMensaje(mensaje))
    {
    strcpy(mensaje.this->mensaje);
    retorno=0;
    }
return retorno;
}

static int isValidMensaje(char* mensaje)
{
return 0;
}

int service_setServiceId(Service* this,int* serviceId)
{
int retorno=-1;
if (this != NULL && isValidServiceId(serviceId))
    {
    strcpy(serviceId.this->serviceId);
    retorno=0;
    }
return retorno;
}

static int isValidServiceId(int* serviceId)
{
return 0;
}

int service_compareGravedad(void* thisA,void* thisB)
{
    return strcmp(A->gravedad,B->gravedad);
}

void service_print(Service* this)
{
    printf("\n%s --" ,this->gravedad,this->mensaje,this->serviceId);

    return 0;

}

Service* service_newParametros(int* gravedad,char* mensaje,int* serviceId);
{
Service* this = NULL;
Service* pService=NULL;
pService = service_new();
if(pService != NULL&&
                !service_setGravedad(pService,gravedad)&&
                !service_setMensaje(pService,mensaje)&&
                !service_setServiceId(pService,serviceId)

{
        service_delete(this);
        this = NULL;
}


return this;
}
