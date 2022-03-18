#include<stdio.h>

int main()
{
    float calificacion;

    printf("Ingrese la calificación del alumno: ");
    scanf("%f", &calificacion);

    if(calificacion < 6) printf("¡Reprobaste, burro!");

    else if (calificacion < 7) printf("¡Pansaste, flojo!");   
}
