#include <stdio.h>

int main() {
    float n1, n2, n3, media;
    printf("Três Notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3) / 3.0f;
    printf("Média: %.2f\n", media);
    return 0;

}