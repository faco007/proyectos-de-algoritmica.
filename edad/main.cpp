/* programa edad */

#include <conio.h>
#include <stdio.h>

int main (){
int num1 = 2024;
int num2 = 2006;
int resultado = 2024 - 2006;


    char nombre [20]; int fecha, de, nacimiento [10];
    printf("introduzca su nombre:");
    scanf("%s", nombre);
     printf("introduzca su fecha de nacimiento:");
    scanf("%i", fecha, de, nacimiento);

     printf("hola %s, tu edad es.", nombre);
     printf("%d", resultado);
    getch(); //pausa//
    return 0;
}
