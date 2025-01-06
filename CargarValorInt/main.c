#include <stdio.h>


int main()
{
    int num=0;//Creamos la variable int igualada a 0 para que no agarre valores basura
    printf("Ingrese su numero:");
    scanf("%d",&num);// Ingreso del numero seleccionado, usamos & para acceder a su direccion de memoria
    printf("Su numero fue: %d",num); //Imprimimos el numero

    return 0;
}
