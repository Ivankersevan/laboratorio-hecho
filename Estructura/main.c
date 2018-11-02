#include <stdio.h>
#include <stdlib.h>

struct eEmpleado{
int legajo;
char nombre[31];
float salario;
int isEmpty;
};

int main()
{
  struct eEmpleado emple;

  printf("Ingrese legajo:\n");

  scanf("%d", & emple.legajo);


  printf("Ingrese nombre:\n");

  scanf("%d", & emple.nombre);


  printf("Ingrese salario:\n");

  scanf("%f",  emple.salario);


  printf("Legajo: %d \t Nombre: %d \t Salario: %f \t ", emple.legajo, emple.nombre, emple.salario);




 return 0;

}
