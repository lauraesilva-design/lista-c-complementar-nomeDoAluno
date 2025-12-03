#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

 float preco, valor, res;

 printf("digite o peço do produto: \n");
  scanf("%f", &preco);

  

  res = preco +(preco * 0,15);
    printf("o valor do produto com o crecismento é foi para: %.4f", res);
    system("pause");
    return 0;
}
