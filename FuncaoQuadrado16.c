#include <stdio.h>
#include<stdlib.h>
#include<locale.h>

int quadrado(int x) {
    return x * x;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("Quadrado: %d\n", quadrado(n));
    return 0;
}