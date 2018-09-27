#ifndef PANTALLA_H_INCLUDED
#define PANTALLA_H_INCLUDED
 struct Pantalla
{
    int id;
    int tipo;
    char nombre[32];
    char direccion[128];
    int isEmpty;

}
 typedef struct S_Pantalla pantalla;
 void pant_inicializar(Pantalla*pBuffer,int len);
 void prod_inicializar(Producto* pBuffer,int len);
 void prod_alta(Producto* pBuffer,int len,int posicion);
 int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
 int esNumerico(char str[]) ;
int esTelefono(char str[]);
int esAlfaNumerico(char str[]);
int esSoloLetras(char str[]);


#endif // PANTALLA_H_INCLUDED
