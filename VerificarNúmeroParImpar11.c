#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

     setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Informe um número para saber se ele é par ou impar: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("O número é par");
    }else{
        printf("O número é impar");
    }
    

     system("pause");
    return 0;
}