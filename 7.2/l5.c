#include <stdio.h>
#include <stddef.h>

struct Ruim {
    char a;
    int b;
    char c;
};

struct Bom {
    int b;
    char a;
    char c;
};

int main(void) {
    printf("Ruim:\n");
    printf("sizeof = %zu\n", sizeof(struct Ruim));
    printf("a = %zu\n", offsetof(struct Ruim, a));
    printf("b = %zu\n", offsetof(struct Ruim, b));
    printf("c = %zu\n", offsetof(struct Ruim, c));

    printf("\nBom:\n");
    printf("sizeof = %zu\n", sizeof(struct Bom));
    printf("b = %zu\n", offsetof(struct Bom, b));
    printf("a = %zu\n", offsetof(struct Bom, a));
    printf("c = %zu\n", offsetof(struct Bom, c));

    return 0;
}