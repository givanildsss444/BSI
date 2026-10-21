#include "mathlib.h"

int maior(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

long fatorial(int n)
{
    long resultado = 1;

    for (int i = 1; i <= n; i++)
    {
        resultado *= i;
    }

    return resultado;
}