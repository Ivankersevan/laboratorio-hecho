#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED
typedef struct
{

char nombre[50];
char apellido[50];
float altura;
int edad;

}miCliente;

miCliente* miCliente_new();
miCliente* miCliente_newParametros(char* nombre,char* apellido);
void miCliente* miCliente_delete(miCliente* this);
//--------------------------------------------------------
int miCliente_setNombre(miCliente* this,char* nombre);
int miCliente_getNombre(miCliente* this,char* nombre);
static int isValidNombre(char* nombre);
//--------------------------------------------------------
int miCliente_setApellido(miCliente* this,char* apellido);
int miCliente_getApellido(miCliente* this,char* apellido);
static int isValidApellido(char* apellido);
//--------------------------------------------------------
int miCliente_setAltura(miCliente* this,float* altura);
int miCliente_getAltura(miCliente* this,float* altura);
static int isValidAltura(float* altura);
//--------------------------------------------------------
int miCliente_compareNombre(miCliente* this,miCliente* this);
void miCliente_print(miCliente* this);


#endif // UTN_H_INCLUDED
