#include <stdio.h>
#include <stdlib.h>

int *cria_sequencia(int n)
{
    int *vetor = malloc(n * sizeof(int));

    if (vetor == NULL)
    {
        return NULL;
    }

    for (int i = 0; i < n; i++)
    {
        vetor[i] = i + 1;
    }

    return vetor;
}

int main(void)
{
    int n = 5;
    int *vetor = cria_sequencia(n);

    if (vetor == NULL)
    {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");

    free(vetor);

    return 0;
}