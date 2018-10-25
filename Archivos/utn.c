#include "utn.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
miCliente* miCliente_new(void)
{
return (miCliente*) malloc(sizeof(miCliente))
}


void miCliente_delete(miCliente* this)
{
free(this);
}


int miCliente_setNombre(miCliente* this,char* nombre)
{
int retorno=-1;
if (this != NULL && isValidNombre(nombre))
    {
    strcpy(nombre.this->nombre);
    retorno=0;
    }
return retorno;
}

static int isValidNombre(char* nombre)
{
return 0;
}

int miCliente setApellido(miCliente* this,char* apellido)
{
int retorno=-1;
if (this != NULL && isValidApellido(apellido))
    {
    strcpy(apellido.this->apellido);
    retorno=0;
    }
return retorno;
}

static int isValidApellido(char* apellido)
{
return 0;
}

int miCliente setAltura(miCliente* this,float* altura)
{
int retorno=-1;
if (this != NULL && isValidAltura(altura))
    {
    strcpy(altura.this->altura);
    retorno=0;
    }
return retorno;
}

static int isValidAltura(float* altura)
{
return 0;
}

int miCliente_compareNombre(miCliente* thisA,miCliente* thisB)
{
    return strcmp(thisA->nombre,thisB->nombre);
}

void miCliente_print(miCliente* this)
{
    printf("\n%s --" ,this->nombre,this->apellido,this->altura);

    return 0;

}

miCliente* miCliente_newParametros(char* nombre,char* apellido,float* altura);
{
miCliente* this = NULL;
miCliente* pmiCliente=NULL;
pmiCliente = miCliente_new();
if(pmiCliente != NULL&&
                !miCliente_setNombre(pmiCliente,nombre)&&
                !miCliente_setApellido(pmiCliente,apellido)&&
                !miCliente_setAltura(pmiCliente,altura)&&)

{
        miCliente_delete(this);
        this = NULL;
}


return this;
}
