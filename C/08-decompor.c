#include <stdio.h>

int main() {
    int n;
    printf("Numero de Tres Digitos: ");
    scanf("%d", &n);
    printf("Centena: %d\n", n / 100);
    printf("Dezena: %d\n", (n / 10) % 10);
    printf("Unidade: %d\n", n % 10);
    return 0;

}