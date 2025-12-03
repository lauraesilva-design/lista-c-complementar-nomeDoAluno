#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float numero1, numero2, numero3, resp;

printf("Digite o primeiro altura: ");
scanf("%f", &numero1);
printf("Digite o segundo altura: ");
scanf("%f", &numero2);
printf("Digite o terceiro altura: ");
scanf("%f", &numero3);

resp = (numero1 + numero2 + numero3)/3;
printf("Resultado da media: %.3f", resp);

     system("pause");
    return 0;
}