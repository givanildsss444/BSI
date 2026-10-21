#include <stdio.h>

void divmod(int a, int b, int *q, int *r)
{
    *q = a / b;
    *r = a % b;
}

int main(void)
{
    int a, b;
    int q, r;

    printf("Dividendo e divisor: ");
    scanf("%d %d", &a, &b);

    divmod(a, b, &q, &r);

    printf("Quociente: %d, Resto: %d\n", q, r);

    return 0;
}