#include <stdio.h>

#define ANO_ATUAL 2026

int main() {
    int ano;
    printf("Ano de Nascimento: ");
    scanf("%d", &ano);
    printf("Idade: %d\n", ANO_ATUAL - ano);
    return 0;

}