#include <stdio.h>
#include "mathlib.h"

int main(void)
{
    int a, b, n;

    printf("Dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior: %d\n", maior(a, b));

    printf("n para o fatorial: ");
    scanf("%d", &n);

    printf("Fatorial: %ld\n", fatorial(n));

    return 0;
}