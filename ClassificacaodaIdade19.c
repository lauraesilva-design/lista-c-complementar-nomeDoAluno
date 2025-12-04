#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    int idade;
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 12)
        printf("Crianca\n");
    else if (idade <= 17)
        printf("Adolescente\n");
    else if (idade <= 59)
        printf("Adulto\n");
    else
        printf("Idoso\n");

    return 0;
}