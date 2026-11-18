#include <stdio.h>
#include <math.h>

struct ponto {
    double x;
    double y;
};

int main(void) {
    struct ponto a, b;
    double distancia;

    printf("Digite x e y do ponto A: ");
    scanf("%lf %lf", &a.x, &a.y);

    printf("Digite x e y do ponto B: ");
    scanf("%lf %lf", &b.x, &b.y);

    distancia = sqrt((b.x - a.x) * (b.x - a.x) +
                     (b.y - a.y) * (b.y - a.y));

    printf("Distancia = %.2f\n", distancia);

    return 0;
}