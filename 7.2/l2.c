#include <stdio.h>

typedef struct {
    char nome[30];
    float n1;
    float n2;
    float n3;
} Aluno;

int main(void) {
    Aluno alunos[3] = {
        {"Ana", 8.0f, 9.0f, 10.0f},
        {"Carlos", 7.0f, 8.0f, 7.0f},
        {"Maria", 9.0f, 9.0f, 8.0f}
    };

    float maior_media = 0.0f;
    int melhor = 0;

    for (int i = 0; i < 3; i++) {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0f;

        if (media > maior_media) {
            maior_media = media;
            melhor = i;
        }
    }

    printf("Maior media: %s (%.2f)\n",
           alunos[melhor].nome, maior_media);

    return 0;
}