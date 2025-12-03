#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int km, resp;

    printf("Digite uma velocidade em km/h: ");
    scanf(" %d", &km);

    resp = km / 3.6;

    printf("Sua velocidade em km/h e converta-a para m/s é %d \n", resp);

     system("pause");
    return 0;
}