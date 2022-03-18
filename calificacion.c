#include<stdio.h>

int main()
{
    float calificacion;

    printf("Ingrese la calificación del alumno: ");
    scanf("%f", &calificacion);

    if(calificacion > 5.9) printf("¡Alumno aprobado!");

    else printf("¡Alumno reprobado!"); 
}