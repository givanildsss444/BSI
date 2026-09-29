#include <stdio.h>

int main() {
    
    float altura, peso, imc;
    printf("Digite a altura (m) e o peso (kg): ");
    scanf("%f %f", &altura, &peso);
    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);
    return 0;
}
