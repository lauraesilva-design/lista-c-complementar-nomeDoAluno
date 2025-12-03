#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char nome[50], cidade[50];

    printf("Digite o seu nome: ");
    fgets(nome,50,stdin);

    printf("Digite o nome da sua cidade: ");
    fgets(cidade,50,stdin);

printf("O seu nome é %s e você mora em %s \n", nome, cidade);

     system("pause");
    return 0;
}