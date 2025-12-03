#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    printf("Digite o primeiro número inteiro: \n");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: \n");
    scanf(" %d", &num2);
    printf("Digite o terceiro número inteiro: \n");
    scanf("%d", &num3);

    if(num1>=num2<num3){
        printf("O primeiro numero é maior que todos");
    }else if(num2>=num1<num3){
        printf("O segundo numero é maior que todos");
    }else{
        printf("O terceiro numero é maior que todos");
    }

    system("pause");
    return 0;
}