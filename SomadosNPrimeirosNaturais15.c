#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
    int n;
    scanf("%d", &n);

    int soma = n * (n + 1) / 2;

    printf("Soma: %d\n", soma);
    return 0;
}
