#include <stdio.h>

void troca(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x, y;

    printf("Dois inteiros: ");
    scanf("%d %d", &x, &y);

    troca(&x, &y);

    printf("Depois: x = %d, y = %d\n", x, y);

    return 0;
}