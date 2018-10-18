#ifndef SERVICE_H_INCLUDED
#define SERVICE_H_INCLUDED
#include "Service.c"

typedef struct
{
int gravedad;
char mensaje[65];
int serviceId;

}Service;

Service* service_new();
Service* service_newParametros(char* gravedad,char mensaje);
void Service* service_delete(Service* this);
//--------------------------------------------------------
int service_setGravedad(Service* this,int* gravedad);
int service_getGravedad(Service* this,int* gravedad);
static int isValidGravedad(int* gravedad);
//--------------------------------------------------------
int service_setMensaje(Service* this,char* mensaje);
int service_getMensaje(Service* this,char* mensaje);
static int isValidMensaje(char* mensaje);
//--------------------------------------------------------
int service_setServiceId(Service* this,int* serviceId);
int service_getServiceId(Service* this,int* serviceId);
static int isValidServiceId(int* serviceId);
//--------------------------------------------------------
int service_compareGravedad(Service* this,Service* this);
void service_print(Service* this);


#endif // SERVICE_H_INCLUDED
