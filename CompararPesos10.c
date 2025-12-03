#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    int peso1, peso2;

    printf("Informe o primeira peso: ");
    fflush(stdin);
    scanf("%d", &peso1);

    printf("Informe o segundo peso: ");
    fflush(stdin);
    scanf("%d", &peso2);

    if(peso1 > peso2){
        printf("O primeira peso é maior que a segunda");
    }else if(peso1 == peso2){
        printf("Os peso sao as mesmas. \n");
    }else{
        printf("O primeira peso é menor que a segunda");
    }
    

     system("pause");
    return 0;
}
