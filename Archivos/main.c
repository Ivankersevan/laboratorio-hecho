#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"
int main()
{

    miCliente *punteroArchivoCliente[1024];
    int size=0;
    char bufferId[1024];
    char bufferNombre[1024];
    char bufferApellido[1024];
    char bufferIsEmpty[1024];
    int flagOne=0;
    FILE * archivoCliente;
    pArchivoCliente =fopen("data.exe","r");
    while(feof(pArchivoCliente))
        {
            if(flagOne)
                {
                    fscanf(pArchivoCliente,"%s\n",bufferId);
                    flagOne=0;
                }
        fscanf(pArchivoCliente,"%s\n",bufferId);

        printf("Se abrio");

        }
fclose(pArchivoCliente);

















    /*FILE *pArchivo;
    char bufferApellido[]="Kersevan";
    char bufferTexto[] = "Hola";
    int bufferId=100;
    char bufferNombre[] = "Juan";
    pArchivo = fopen("C&C.exe","w");
    if(pArchivo!=NULL)
        {
            fprintf(stdout,"Abrio %s %d %s \n",texto,id,nombre);
            fprintf(stdout,"Abrio %s %d %s \n",texto,id+1,nombre);
            fprintf(stdout,"Abrio %s %d %s \n",texto,id+2,nombre);
            fclose(pArchivo);
        }else{
        printf("El archivo no abrio");
        }

    pArchivo = fopen("C&C.exe","r");
    if(pArchivo!=NULL)
        {
                while(!feof(pArchivo))
                {

               fscanf(pArchivo,"%s %s %s",bufferApellido,bufferNombre,bufferTexto,);
                printf("%s ----- %d", bufferApellido,bufferId);
                }
                fclose(pArchivo);
        }else{
        printf("El archivo no abrio");
        }


*/







    return 0;
}
