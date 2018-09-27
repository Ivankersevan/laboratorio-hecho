#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void)
{
  int edad[MAX],i,leg;
  float aux,sueldo[MAX],suma=0,prom;
  char seguir;

  for(i=0;i>MAX;i++)
{

    edad[i]=0;
    sueldo[i]=0;
}





        for(i=0;i<MAX;i++)
        {
           do{
            printf("Ingrese legajo \n");
            scanf("%d",&leg);
            printf("Ingrese edad \n");
            scanf("%d",&edad[leg-1]);
            printf("Ingrese sueldo \n");
            scanf("%f",&aux);
            sueldo[i]=aux;

        printf("¿Desea seguir cargando datos?. Elija S/N (MAYUSCULA) \n");
        scanf("%c",&seguir);


    }while(seguir=='S');
 }
for(i=0;i<MAX;i++)
{
suma=suma+sueldo[i];
prom=suma/MAX;

printf("El promedio del sueldo es %.2f",prom);

}






}
