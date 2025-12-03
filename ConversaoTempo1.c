#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int hr, resp;

    printf("Digite um valor em horas: ");
    scanf("%d", &hr);

    resp = hr * 60;

    printf("Suas horas convertida para minutos é %d \n", resp);


     system("pause");
    return 0;
}