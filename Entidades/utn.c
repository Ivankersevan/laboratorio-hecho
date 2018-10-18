#include "utn.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
Empleado* empleado_new(void)
{
return (Empleado*) malloc(sizeof(Empleado))
}


void empleado_delete(Empleado* this)
{
free(this);
}


int empleado_setNombre(Empleado* this,char* nombre)
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

int empleado setApellido(Empleado* this,char* apellido)
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

int empleado setAltura(Empleado* this,float* altura)
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

int empleado_compareNombre(Empleado* thisA,Empleado* thisB)
{
    return strcmp(thisA->nombre,thisB->nombre);
}

void empleado_print(Empleado* this)
{
    printf("\n%s --" ,this->nombre,this->apellido,this->altura);

    return 0;

}

Empleado* empleado_newParametros(char* nombre,char* apellido,float* altura);
{
Empleado* this = NULL;
Empleado* pEmpleado=NULL;
pEmpleado = empleado_new();
if(pEmpleado != NULL&&
                !empleado_setNombre(pEmpleado,nombre)&&
                !empleado_setApellido(pEmpleado,apellido)&&
                !empleado_setAltura(pEmpleado,altura)&&)

{
        empleado_delete(this);
        this = NULL;
}


return this;
}
