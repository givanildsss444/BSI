#include <stdio.h>

int main(void) {
    int v[5];
    int maior;
    double soma = 0;

    printf("Digite 5 inteiros:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &v[i]);
        soma += v[i];
    }

    maior = v[0];

    for (int i = 1; i < 5; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", soma / 5.0);

    return 0;
}