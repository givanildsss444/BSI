#include <stdio.h>

int main() {
    float base, altura;
    printf("Base e Altura: ");
    scanf("%f %f", &base, &altura);
    printf("Área: %.2f\n", base * altura);
    printf("Perímetro: %.2f\n", 2 * (base * altura));
    return 0;

}