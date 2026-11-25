#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *v = malloc(5 * sizeof(int));

    if (v == NULL)
    {
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        v[i] = i + 1;
    }

    printf("Valor: %d\n", v[2]);

    free(v);
    v = NULL;

    return 0;
}