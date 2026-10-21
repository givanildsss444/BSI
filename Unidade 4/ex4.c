#include <stdio.h>

long soma_rec(int n)
{
    if (n == 0)
        return 0;

    return n + soma_rec(n - 1);
}

long soma_iter(int n)
{
    long soma = 0;

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    return soma;
}

int main(void)
{
    int n;

    printf("n: ");
    scanf("%d", &n);

    printf("rec = %ld, iter = %ld\n",
           soma_rec(n),
           soma_iter(n));

    return 0;
}