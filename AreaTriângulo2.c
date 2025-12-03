#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int base, altura, area;

    printf("Digite a base do triangulo: ");
    scanf(" %d", &base);

    printf("Digite a altura do triangulo: ");
    scanf(" %d", &altura);

    area = (base * altura)/2;

    printf("A area do seu triangulo é %d \n", area);

     system("pause");
    return 0;
}