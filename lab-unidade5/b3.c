#include <stdio.h>

int main(void) {
    char s[50];
    int tamanho = 0;

    printf("Digite uma palavra: ");
    scanf("%49s", s);

    while (s[tamanho] != '\0') {
        tamanho++;
    }

    printf("Invertida: ");

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}